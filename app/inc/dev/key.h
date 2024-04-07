/*
	Copyright 2023. 홍윤기 all right reserved.

	Permission is hereby granted, free of charge, to any person obtaining
	a copy of this software and associated documentation files (the
	"Software"), to deal in the Software without restriction, including
	without limitation the rights to use, copy, modify, merge, publish,
	distribute, sublicense, and/or sell copies of the Software, and to
	permit persons to whom the Software is furnished to do so, subject to
	the following conditions:

	The above copyright notice and this permission notice shall be
	included in all copies or substantial portions of the Software.

	THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
	EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
	MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
	NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
	LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
	OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
	WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/

#ifndef DEV_KEY__H_
#define DEV_KEY__H_

#include <stdint.h>

namespace Key
{
	// Key를 초기화 한다.
	void initialize(void);
	
	// 파란색 User 버튼의 현재 상태를 얻는다.
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
