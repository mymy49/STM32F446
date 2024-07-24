/*
 * Copyright (c) 2023 Yoon-Ki Hong
 *
 * This file is subject to the terms and conditions of the MIT License.
 * See the file "LICENSE" in the main directory of this archive for more details.
 */

#ifndef DEV_LED__H_
#define DEV_LED__H_

#include <stdint.h>

namespace Led
{
	// LED를 초기화 한다.
	void initialize(void);

	// LED를 ON/OFF 한다.
	//
	// bool en
	//		LED의 상태를 설정한다. (true - 켜기, false - 끄기)
	// uint32_t fadeTime
	//		fade in 또는 fade out을 하는 지속시간을 ms 단위로 설정한다.
	void on(bool en, uint32_t fadeTime = 100);
}

#endif
