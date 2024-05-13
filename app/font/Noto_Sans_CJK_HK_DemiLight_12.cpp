////////////////////////////////////////////////////////////////////////////////////////
//
// 저작권 표기 License V3.3
//
// 본 소스 코드는 아래 사항에 동의할 경우에 사용 가능합니다.
// 아래 사항에 대해 동의하지 않거나 이해하지 못했을 경우 사용을 금합니다.
//
// 본 소스 코드를 :
//		- 사용하였다면 아래 사항을 모두 동의하는 것으로 자동 간주 합니다.
//		- 상업적 또는 비 상업적 이용이 가능합니다.
//		- 본 저작권 표시 주석을 제외한 코드의 내용을 임의로 수정하여 사용하는 것은 허용합니다.
//		- 사용자가 수정한 코드를 사용자의 고객사에게 상호간 전달은 허용합니다.
//		- 그러나 수정하여 다수에게 재배포하는 행위를 금지합니다.
//		- 사용으로 인해 발생하는 모든 사고에 대해서 어떠한 법적 책임을 지지 않습니다.
//		- 어떤 형태의 기여든지, 그것은 기증으로 받아들입니다.
//
// 본 소스 코드는 프리웨어로 앞으로도 유료로 전환하지 않을 것입니다.
// 사용자 또는 부품의 제조사가 요구하는 업데이트가 있을 경우 후원금을 받아
// 요구하는 사항을 업데이트 할 예정입니다.
//
// Home Page : http://cafe.naver.com/yssoperatingsystem
// Copyright 2024. 홍윤기 all right reserved.
//
////////////////////////////////////////////////////////////////////////////////////////

#include "Noto_Sans_CJK_HK_DemiLight_12.h"

static const uint8_t font_0x00000061[21] = // a
{
	0x40, 0xD9, 0x08, 
	0x70, 0x12, 0x68, 
	0x00, 0x10, 0xA7, 
	0x40, 0x7A, 0xA8, 
	0xC2, 0x00, 0xA4, 
	0xD3, 0x21, 0xA9, 
	0x70, 0x9D, 0xA5
};

static const Font::fontInfo_t fontData1[1]
{
	{								// a
		0x00000061,					// utf8 code
		6,							// width
		7,							// height
		0,							// x position
		3,							// y position
		(uint8_t*)font_0x00000061	// data
	}
};

static const uint8_t font_0x00000043[36] = // C
{
	0x00, 0x93, 0x9D, 0x02, 
	0x40, 0x4C, 0x42, 0x09, 
	0xC0, 0x03, 0x00, 0x00, 
	0xE2, 0x00, 0x00, 0x00, 
	0xB4, 0x00, 0x00, 0x00, 
	0xE2, 0x00, 0x00, 0x00, 
	0xD0, 0x03, 0x00, 0x00, 
	0x40, 0x3C, 0x41, 0x1B, 
	0x00, 0x93, 0x9D, 0x02
};

static const Font::fontInfo_t fontData3[1]
{
	{								// C
		0x00000043,					// utf8 code
		8,							// width
		9,							// height
		0,							// x position
		1,							// y position
		(uint8_t*)font_0x00000043	// data
	}
};

static const uint8_t font_0x00000065[28] = // e
{
	0x10, 0xD8, 0x18, 0x00, 
	0xA0, 0x15, 0x96, 0x00, 
	0xB3, 0x00, 0xF0, 0x01, 
	0xF5, 0xFF, 0xFF, 0x01, 
	0xC3, 0x00, 0x00, 0x00, 
	0xB0, 0x15, 0x31, 0x00, 
	0x10, 0xD8, 0x5B, 0x00
};

static const Font::fontInfo_t fontData5[1]
{
	{								// e
		0x00000065,					// utf8 code
		7,							// width
		7,							// height
		0,							// x position
		3,							// y position
		(uint8_t*)font_0x00000065	// data
	}
};

static const uint8_t font_0x00000066[30] = // f
{
	0x20, 0xDC, 0x01, 
	0x90, 0x06, 0x00, 
	0xB0, 0x04, 0x00, 
	0xF8, 0xAF, 0x00, 
	0xB0, 0x04, 0x00, 
	0xB0, 0x04, 0x00, 
	0xB0, 0x04, 0x00, 
	0xB0, 0x04, 0x00, 
	0xB0, 0x04, 0x00, 
	0xB0, 0x04, 0x00
};

static const Font::fontInfo_t fontData6[1]
{
	{								// f
		0x00000066,					// utf8 code
		5,							// width
		10,							// height
		0,							// x position
		0,							// y position
		(uint8_t*)font_0x00000066	// data
	}
};
static const CodeFont::codeFontInfo_t codeFontInfo = 
{
	12,
	{0, 1, 0, 1, 0, 1, 1, 0},
	{
		0,
		fontData1,
		0,
		fontData3,
		0,
		fontData5,
		fontData6,
		0
	}
};

CodeFont Font_Noto_Sans_CJK_HK_DemiLight_12(&codeFontInfo);


