/*
 * Copyright (c) 2024 Yoon-Ki Hong
 *
 * This file is subject to the terms and conditions of the MIT License.
 * See the file "LICENSE" in the main directory of this archive for more details.
 */

#include <yss.h>
#include <bsp.h>
#include <task.h>

void thread_blinkLed(void);

int main(void)
{
	// 운영체체 초기화
	initializeYss();
	
	// 보드 초기화
	initializeBoard();

	// Function Queue 기능을 활용하여 순차 처리를 한다.
	fq.start();
	fq.add(Task::displayLogo);		// 로고 출력
	fq.add(Task::handleMainPage);		// 메인 페이지 처리
	
	// LED 깜박이는 쓰레드를 스케줄러에 등록
	thread::add(thread_blinkLed, 512);

	while(1)
	{
		thread::yield();
	}
}

void thread_blinkLed(void)
{
	while(1)
	{
		Led::on(true, 400);
		thread::delay(500);

		Led::on(false, 400);
		thread::delay(500);
	}
}

