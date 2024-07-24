/*
 * Copyright (c) 2023 Yoon-Ki Hong
 *
 * This file is subject to the terms and conditions of the MIT License.
 * See the file "LICENSE" in the main directory of this archive for more details.
 */

#include <task.h>
#include <yss.h>
#include <bsp.h>
#include <util/key.h>

#include <../font/Noto_Sans_CJK_HK_DemiLight_32.h>

namespace Task
{
	static void drawBackground(void)
	{
		lcd.setBackgroundColor(0x30, 0x30, 0x00);
		lcd.clear();
		lcd.setBrushColor(0x30, 0x30, 0x30);
		lcd.fillRect(Position_t{15, 15}, Size_t{479-30, 319-30});
		//clearListBox();

		frame.setSize(200, 35);
		frame.setFont(Font_Noto_Sans_CJK_HK_DemiLight_32);
		frame.setFontColor(0x00, 0x00, 0x00);
		frame.setBackgroundColor(0x30, 0x30, 0x30);
		frame.clear();
		frame.drawString(Position_t{0, 0}, "파일 탐색기");
		lcd.drawBitmap(Position_t{20, 20}, frame.getBitmap());
	}

	void thread_handleFileExplorer(void)
	{
		bool anyKeyFlag = false;

		// 백라이트를 Fade in 한다.
		fadeinBackLight();		

		lcd.lock();
		drawBackground();
		lcd.unlock();
		
		// key 이벤트에 등록한다.
		key::addPushHandler(Key::getAnyKey, anyKeyFlag);


		while(1)
		{
			if(anyKeyFlag)
			{	// 아무 버튼이나 눌리면
				anyKeyFlag = false;
				fq.lock();
				fq.add(Task::handleMainPage);	// 메인 페이지 처리 task를 등록한다.
				fq.unlock();

				while(1)	// clearTask() 함수에 의해 현재 쓰레드가 종료될 때까지 대기한다.
					thread::yield();
			}
		}
	} 
	
	error_t handleFileExplorer(FunctionQueue *obj)
	{
		lock();	// unlock()을 만날 때까지 외부에서 이 함수를 강제 종료 시키지 못한다.
		clearTask();	// 이전에 등록된 쓰레드 등을 전부 제거한다.
		
		fadeoutBackLight(); // 백라이트를 Fade out 한다.

		addThread(thread_handleFileExplorer, 512);	// thread_handleMainPage() 함수를 스케줄러에 등록한다.
												// addThread() 함수를 통해 등록된 쓰레드는 clearTask() 함수 호출시 종료 된다.

		unlock();

		return error_t::ERROR_NONE;
	}
}


