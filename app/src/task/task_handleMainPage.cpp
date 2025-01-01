/*
 * Copyright (c) 2023 Yoon-Ki Hong
 *
 * This file is subject to the terms and conditions of the MIT License.
 * See the file "LICENSE" in the main directory of this archive for more details.
 */

#include <task.h>
#include <yss.h>
#include <bsp.h>
#include <task.h>

#include <dev/key.h>

#include <../bmp/Folder.h>
#include <../bmp/Folder_s.h>
#include "../bmp/Information.h"
#include "../bmp/Information_s.h"
#include <../font/Noto_Sans_CJK_HK_DemiLight_16.h>
#include <util/key.h>

#define ITEM_COUNT	2

namespace Task
{
	static int8_t gSelect;

	void drawItem(uint8_t select)
	{
		frame.setFont(Font_Noto_Sans_CJK_HK_DemiLight_16);

		if(select == 0)
			lcd.drawBitmap({10, 10}, &Folder_s);
		else
			lcd.drawBitmap({10, 10}, &Folder);

		frame.setSize(110, 20);
		frame.setBackgroundColor(0x00, 0x00, 0x00);
		frame.setFontColor(0xFF, 0xFF, 0xFF);
		frame.clear();
		frame.drawStringToCenterAligned("파일 탐색기");
		lcd.drawBitmap({10, 110}, frame.getBitmap());

		if(select == 1)
			lcd.drawBitmap({130, 10}, &Information_s);
		else
			lcd.drawBitmap({130, 10}, &Information);

		frame.setSize(110, 20);
		frame.setBackgroundColor(0x00, 0x00, 0x00);
		frame.setFontColor(0xFF, 0xFF, 0xFF);
		frame.clear();
		frame.drawStringToCenterAligned("정보");
		lcd.drawBitmap({130, 110}, frame.getBitmap());
	}

	void drawMenuBackground(void)
	{
		lcd.setBackgroundColor(0x00, 0x00, 0x00);
		lcd.clear();

		drawItem(gSelect);
	}

	void thread_handleMainPage(void)
	{
		bool leftKeyFlag = false, rightKeyFlag = false, enterKeyFlag = false, ableFlag;

		lcd.lock();
		drawMenuBackground();
		lcd.unlock();
		
		key::addPushHandler(Key::getLeft, leftKeyFlag);
		key::addPushHandler(Key::getRight, rightKeyFlag);
		key::addPushHandler(Key::getEnter, enterKeyFlag);

		// 백라이트를 Fade in 한다.
		fadeinBackLight();

		while(1)
		{
			if(rightKeyFlag)
			{
				rightKeyFlag = false;
				gSelect++;
				if(gSelect >= ITEM_COUNT)
					gSelect = 0;
				
				drawItem(gSelect);
			}

			if(leftKeyFlag)
			{
				leftKeyFlag = false;
				gSelect--;
				if(gSelect < 0)
					gSelect = ITEM_COUNT-1;
				
				drawItem(gSelect);
			}

			if(enterKeyFlag)
			{
				enterKeyFlag = false;
				ableFlag = false;

				fq.lock();
				switch(gSelect)
				{
				case 0 : // 파일 탐색기
					ableFlag = true;
					fq.add(Task::handleFileExplorer);
					break;
				
				case 1 : // 정보
					ableFlag = true;
					fq.add(Task::displayInformation);
					break;
				}
				fq.unlock();
				
				if(ableFlag)
				{
					while(1)	// clearTask() 함수에 의한 쓰레드 종료 대기
						thread::yield();
				}
			}

			thread::yield();
		}
	}

	error_t handleMainPage(FunctionQueue *obj)
	{
		lock();	// unlock()을 만날 때까지 외부에서 이 함수를 강제 종료 시키지 못한다.
		clearTask();	// 이전에 등록된 쓰레드 등을 전부 제거한다.
		
		fadeoutBackLight(); // 백라이트를 Fade out 한다.

		addThread(thread_handleMainPage, 512);	// thread_handleMainPage() 함수를 스케줄러에 등록한다.
												// addThread() 함수를 통해 등록된 쓰레드는 clearTask() 함수 호출시 종료 된다.

		unlock();	// 외부에서 강제로 종료가 가능하다.

		return error_t::ERROR_NONE;
	}
}

