/*
 * Copyright (c) 2023 Yoon-Ki Hong
 *
 * This file is subject to the terms and conditions of the MIT License.
 * See the file "LICENSE" in the main directory of this archive for more details.
 */

#ifndef DEV_SPEAKER__H_
#define DEV_SPEAKER__H_

#include <stdint.h>
#include <yss/error.h>

namespace Speaker
{
	// Speaker를 초기화 한다.
	void initialize(void);
	
	// 16 kHz 샘플 / Mono / 16 Bit PCM *.WAV 파일 데이터를 재생한다.
	// 내장 Flash에 저장된 Bin to Source 프로그램으로 파일이 통으로 포함된 형태의 것으로 한정한다.
	//
	// 반환
	//		에러를 반환한다.
	// const void *src
	//		*.WAV의 포인터를 설정한다.
	error_t play(const void *src);
}

#endif
