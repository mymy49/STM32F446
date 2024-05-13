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

#include "Noto_Sans_CJK_HK_Medium_24.h"

static const uint8_t font_0x00EBB3B4[190] = // 보
{
	0x00, 0x95, 0x07, 0x00, 0x00, 0x00, 0x00, 0x70, 0x59, 0x00, 
	0x00, 0xF7, 0x0A, 0x00, 0x00, 0x00, 0x00, 0xA0, 0x8F, 0x00, 
	0x00, 0xF7, 0x0A, 0x00, 0x00, 0x00, 0x00, 0xA0, 0x8F, 0x00, 
	0x00, 0xF7, 0x0A, 0x00, 0x00, 0x00, 0x00, 0xA0, 0x8F, 0x00, 
	0x00, 0xF7, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x8F, 0x00, 
	0x00, 0xF7, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x8F, 0x00, 
	0x00, 0xF7, 0x0A, 0x00, 0x00, 0x00, 0x00, 0xA0, 0x8F, 0x00, 
	0x00, 0xF7, 0x0A, 0x00, 0x00, 0x00, 0x00, 0xA0, 0x8F, 0x00, 
	0x00, 0xF7, 0x0A, 0x00, 0x00, 0x00, 0x00, 0xA0, 0x8F, 0x00, 
	0x00, 0xF7, 0x0A, 0x00, 0x00, 0x00, 0x00, 0xA0, 0x8F, 0x00, 
	0x00, 0xF7, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x8F, 0x00, 
	0x00, 0xF7, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x8F, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0xF2, 0x2F, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0xF2, 0x2F, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0xF2, 0x2F, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0xF2, 0x2F, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0xF3, 0x3F, 0x00, 0x00, 0x00, 0x00, 
	0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xEF, 
	0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xEF
};

static const Font::fontInfo_t fontData4[1]
{
	{								// 보
		0x00EBB3B4,					// utf8 code
		20,							// width
		19,							// height
		1,							// x position
		2,							// y position
		(uint8_t*)font_0x00EBB3B4	// data
	}
};

static const uint8_t font_0x00ECA095[240] = // 정
{
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x33, 0x01, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0xFF, 0x02, 
	0xF1, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x06, 0x20, 0xFF, 0x02, 
	0xF1, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x06, 0x20, 0xFF, 0x02, 
	0x00, 0x00, 0x60, 0xFF, 0x00, 0x00, 0x00, 0x20, 0xFF, 0x02, 
	0x00, 0x00, 0x80, 0xFF, 0x01, 0x00, 0x00, 0x20, 0xFF, 0x02, 
	0x00, 0x00, 0xA0, 0xFF, 0x02, 0x00, 0x00, 0x30, 0xFF, 0x02, 
	0x00, 0x00, 0xE1, 0xFF, 0x06, 0x10, 0xFF, 0xFF, 0xFF, 0x02, 
	0x00, 0x00, 0xF6, 0xFF, 0x1E, 0x10, 0xFF, 0xFF, 0xFF, 0x02, 
	0x00, 0x10, 0xFD, 0xC7, 0x9F, 0x00, 0x00, 0x20, 0xFF, 0x02, 
	0x00, 0xB1, 0xDF, 0x40, 0xFF, 0x19, 0x00, 0x20, 0xFF, 0x02, 
	0x40, 0xFB, 0x3F, 0x00, 0xF6, 0xDF, 0x06, 0x20, 0xFF, 0x02, 
	0xF7, 0xEF, 0x04, 0x00, 0x40, 0xFE, 0x08, 0x20, 0xFF, 0x02, 
	0xE1, 0x29, 0x00, 0x00, 0x00, 0x51, 0x01, 0x20, 0xFF, 0x02, 
	0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x44, 0x01, 
	0x00, 0x00, 0x00, 0x62, 0xA9, 0xDD, 0x9A, 0x15, 0x00, 0x00, 
	0x00, 0x00, 0x90, 0xFF, 0xFF, 0xDD, 0xFF, 0xFF, 0x08, 0x00, 
	0x00, 0x00, 0xF9, 0x6F, 0x02, 0x00, 0x20, 0xF6, 0x8F, 0x00, 
	0x00, 0x30, 0xFF, 0x04, 0x00, 0x00, 0x00, 0x50, 0xFF, 0x02, 
	0x00, 0x40, 0xFF, 0x01, 0x00, 0x00, 0x00, 0x20, 0xFF, 0x03, 
	0x00, 0x20, 0xFF, 0x05, 0x00, 0x00, 0x00, 0x50, 0xFF, 0x02, 
	0x00, 0x00, 0xF9, 0x7F, 0x12, 0x00, 0x31, 0xF7, 0x8F, 0x00, 
	0x00, 0x00, 0x80, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x07, 0x00, 
	0x00, 0x00, 0x00, 0x51, 0x98, 0xBB, 0x89, 0x15, 0x00, 0x00
};

static const Font::fontInfo_t fontData5[1]
{
	{								// 정
		0x00ECA095,					// utf8 code
		19,							// width
		24,							// height
		1,							// x position
		0,							// y position
		(uint8_t*)font_0x00ECA095	// data
	}
};
static const CodeFont::codeFontInfo_t codeFontInfo = 
{
	24,
	{0, 0, 0, 0, 1, 1, 0, 0},
	{
		0,
		0,
		0,
		0,
		fontData4,
		fontData5,
		0,
		0
	}
};

CodeFont Font_Noto_Sans_CJK_HK_Medium_24(&codeFontInfo);


