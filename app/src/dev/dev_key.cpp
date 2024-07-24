/*
 * Copyright (c) 2023 Yoon-Ki Hong
 *
 * This file is subject to the terms and conditions of the MIT License.
 * See the file "LICENSE" in the main directory of this archive for more details.
 */

#include <dev/key.h>
#include <yss.h>
#include <bsp.h>
#include <util/Period.h>

namespace Key
{
	void initialize(void)
	{
		// gpio의 기본 상태가 입력상태이므로 특별히 초기화가 필요하지 않다.
	}

	bool getLeft(void)
	{
		return !gpioC.getInputData(0);
	}

	bool getRight(void)
	{
		return !gpioC.getInputData(1);
	}

	bool getCancel(void)
	{
		return !gpioC.getInputData(2);
	}

	bool getEnter(void)
	{
		return !gpioC.getInputData(3);
	}

	bool getUser(void)
	{
		return !gpioC.getInputData(13);
	}

	bool getAnyKey(void)
	{
		return (getUser() || getLeft() || getRight() || getCancel() || getEnter());
	}
}

