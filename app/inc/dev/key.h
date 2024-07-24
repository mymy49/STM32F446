/*
 * Copyright (c) 2023 Yoon-Ki Hong
 *
 * This file is subject to the terms and conditions of the MIT License.
 * See the file "LICENSE" in the main directory of this archive for more details.
 */

#ifndef DEV_KEY__H_
#define DEV_KEY__H_

#include <stdint.h>

namespace Key
{
	// Key를 초기화 한다.
	void initialize(void);

	// 좌측 버튼의 현재 상태를 얻는다.
	//
	// 반환
	//		좌측 버튼이 눌렸을 경우 true, 안눌렸을 경우 false를 반환한다.
	bool getLeft(void);

	// 우측 버튼의 현재 상태를 얻는다.
	//
	// 반환
	//		우측 버튼이 눌렸을 경우 true, 안눌렸을 경우 false를 반환한다.
	bool getRight(void);

	// 취소 버튼의 현재 상태를 얻는다.
	//
	// 반환
	//		우측 버튼이 눌렸을 경우 true, 안눌렸을 경우 false를 반환한다.
	bool getCancel(void);

	// 엔터 버튼의 현재 상태를 얻는다.
	//
	// 반환
	//		우측 버튼이 눌렸을 경우 true, 안눌렸을 경우 false를 반환한다.
	bool getEnter(void);
		
	// NUCLEO보드에 달린 파란색 User 버튼의 현재 상태를 얻는다.
	//
	// 반환
	//		버튼이 눌렸을 경우 true, 안눌렸을 경우 false를 반환한다.
	bool getUser(void);

	// 전체 버튼 중에 하나라도 눌리면 true를 반환한다.
	//
	// 반환
	//		버튼이 눌렸을 경우 true, 안눌렸을 경우 false를 반환한다.
	bool getAnyKey(void);

}

#endif
