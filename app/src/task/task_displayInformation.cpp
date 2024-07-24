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
 
#include <../font/Noto_Sans_CJK_HK_Medium_24.h>
#include <../font/Noto_Sans_CJK_HK_DemiLight_14.h>

namespace Task
{
	static void drawPage(void)
	{
		Color titleColor(0x30, 0x30, 0xFF);
		Color bgColor(0x00, 0x00, 0x00);
		Position_t pos;

		// 배경색 칠하기
		lcd.setBackgroundColor(titleColor);
		lcd.clear();
		
		// 바탕색을 검정색으로 칠하기
		lcd.setBrushColor(bgColor);
		lcd.fillRect({10, 10}, Size_t{460, 300});

		// 제목 배경 칠하기
		lcd.setBrushColor(titleColor);
		lcd.fillRect({140, 10}, Size_t{200, 30});
		
		// 제목 쓰기
		frame.setFont(Font_Noto_Sans_CJK_HK_Medium_24);
		frame.setSize(200, 40);
		frame.setBackgroundColor(titleColor);
		frame.setFontColor(0xFF, 0xFF, 0xFF);
		frame.clear();
		frame.drawStringToCenterAligned("정보");
		lcd.drawBitmap({140, 0}, frame.getBitmap());

		// 본문 쓰기
		frame.setSize(440, 20);
		frame.setBackgroundColor(bgColor);
		frame.setFont(Font_Noto_Sans_CJK_HK_DemiLight_14);
		frame.setFontColor(0xFF, 0xFF, 0xFF);

		pos.x = 20;
		pos.y = 55;
		frame.clear();
		frame.drawString({0, 0}, "본 소프트웨어는 이순신 OS를 위한 예제 프로젝트입니다.");
		lcd.drawBitmap(pos, frame.getBitmap());

		pos.y += 25;
		frame.clear();
		frame.drawString({0, 0}, "전자 앨범과 탁상 시계 기능을 구현 할 예정입니다.");
		lcd.drawBitmap(pos, frame.getBitmap());

		pos.y += 25;
		frame.clear();
		frame.drawString({0, 0}, "이순신 OS에서 권장하는 프로그래밍 패턴을 제공하기 위해 진행합니다.");
		lcd.drawBitmap(pos, frame.getBitmap());

		pos.y += 25;
		frame.clear();
		frame.drawString({0, 0}, "실무에 적용하는 예제 코드를 참고하시고 직접 활용 하는데 사용해보세요.");
		lcd.drawBitmap(pos, frame.getBitmap());

		pos.y += 25;
		frame.clear();
		frame.drawString({0, 0}, "감사합니다.");
		lcd.drawBitmap(pos, frame.getBitmap());
	}

	void thread_displayInformation(void)
	{
		volatile bool anyKeyFlag = false;

		lcd.lock();
		drawPage();
		lcd.unlock();

		// 백라이트를 Fade in 한다.
		fadeinBackLight();		
		
		// key 이벤트에 등록한다.
		key::addPushHandler(Key::getAnyKey, (bool&)anyKeyFlag);

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

	error_t displayInformation(FunctionQueue *obj)
	{
		lock();	// unlock()을 만날 때까지 외부에서 이 함수를 강제 종료 시키지 못한다.
		clearTask();	// 이전에 등록된 쓰레드 등을 전부 제거한다.

		fadeoutBackLight(); // 백라이트를 Fade out 한다.
		
		addThread(thread_displayInformation, 512);	// thread_displayInformation() 함수를 스케줄러에 등록한다.
													// addThread() 함수를 통해 등록된 쓰레드는 clearTask() 함수 호출시 종료 된다.

		unlock();	// 외부에서 강제로 종료가 가능하다.

		return error_t::ERROR_NONE;
	}
}


