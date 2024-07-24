/*
 * Copyright (c) 2024 Yoon-Ki Hong
 *
 * This file is subject to the terms and conditions of the MIT License.
 * See the file "LICENSE" in the main directory of this archive for more details.
 */

#ifndef BSP__H_
#define BSP__H_

#include <dev/led.h>
#include <dev/key.h>
#include <dev/speaker.h>

#include <mod/spi_tft_lcd/MSP3520.h>
#include <gui/Bmp888Buffer.h>
#include <util/FunctionQueue.h>

// 보드의 장치들을 초기화 한다.
void initializeBoard(void);

// LCD의 백라이트 밝기를 조절한다.
//
// float dimming
//		밝기를 설정한다. 0 ~ 1까지 값으로 1이 가장 밝은 값이다. 
void setLcdBackLight(float dimming);

// LCD의 백라이트를 점차 밝아지게 한다.
void fadeinBackLight(void);

// LCD의 백라이트를 점차 어두워지게 한다.
void fadeoutBackLight(void);

extern MSP3520 lcd;
extern Bmp888Buffer frame;
extern FunctionQueue fq;

#endif

