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

#include "Noto_Sans_CJK_HK_DemiLight_10.h"

static const uint8_t font_0x00000068[27] = // h
{
	0x30, 0x00, 0x00, 
	0xC2, 0x00, 0x00, 
	0xC2, 0x00, 0x00, 
	0xE2, 0xC7, 0x07, 
	0xE2, 0x13, 0x1C, 
	0xC2, 0x00, 0x3A, 
	0xC2, 0x00, 0x3A, 
	0xC2, 0x00, 0x3A, 
	0xC2, 0x00, 0x3A
};

static const uint8_t font_0x00000070[24] = // p
{
	0xB2, 0xC8, 0x07, 
	0xE2, 0x02, 0x49, 
	0xC2, 0x00, 0x85, 
	0xC2, 0x00, 0x76, 
	0xD2, 0x01, 0x3A, 
	0xD2, 0xCA, 0x05, 
	0xC2, 0x00, 0x00, 
	0xC2, 0x00, 0x00
};

static const Font::fontInfo_t fontData0[2]
{
	{								// h
		0x00000068,					// utf8 code
		6,							// width
		9,							// height
		0,							// x position
		0,							// y position
		(uint8_t*)font_0x00000068	// data
	},
	{								// p
		0x00000070,					// utf8 code
		6,							// width
		8,							// height
		0,							// x position
		3,							// y position
		(uint8_t*)font_0x00000070	// data
	}
};

static const uint8_t font_0x00000061[18] = // a
{
	0x70, 0xBB, 0x02, 
	0x40, 0x40, 0x09, 
	0x10, 0x95, 0x0C, 
	0xA2, 0x32, 0x0C, 
	0x75, 0x50, 0x0C, 
	0x91, 0x7B, 0x0C
};

static const uint8_t font_0x00000079[24] = // y
{
	0x2B, 0x10, 0x0D, 
	0x75, 0x40, 0x07, 
	0xD1, 0x90, 0x03, 
	0x80, 0xC5, 0x00, 
	0x30, 0x7F, 0x00, 
	0x00, 0x2D, 0x00, 
	0x30, 0x09, 0x00, 
	0xA7, 0x01, 0x00
};

static const uint8_t font_0x00000069[9] = // i
{
	0x20, 
	0xA2, 
	0x00, 
	0xC2, 
	0xC2, 
	0xC2, 
	0xC2, 
	0xC2, 
	0xC2
};

static const Font::fontInfo_t fontData1[3]
{
	{								// a
		0x00000061,					// utf8 code
		5,							// width
		6,							// height
		0,							// x position
		3,							// y position
		(uint8_t*)font_0x00000061	// data
	},
	{								// y
		0x00000079,					// utf8 code
		5,							// width
		8,							// height
		0,							// x position
		3,							// y position
		(uint8_t*)font_0x00000079	// data
	},
	{								// i
		0x00000069,					// utf8 code
		2,							// width
		9,							// height
		0,							// x position
		0,							// y position
		(uint8_t*)font_0x00000069	// data
	}
};

static const uint8_t font_0x0000003A[6] = // :
{
	0x40, 
	0xB2, 
	0x00, 
	0x00, 
	0x40, 
	0xB2
};

static const uint8_t font_0x00000072[12] = // r
{
	0xA2, 0xB8, 
	0xF2, 0x04, 
	0xC2, 0x00, 
	0xC2, 0x00, 
	0xC2, 0x00, 
	0xC2, 0x00
};

static const Font::fontInfo_t fontData2[2]
{
	{								// :
		0x0000003A,					// utf8 code
		2,							// width
		6,							// height
		0,							// x position
		3,							// y position
		(uint8_t*)font_0x0000003A	// data
	},
	{								// r
		0x00000072,					// utf8 code
		4,							// width
		6,							// height
		0,							// x position
		3,							// y position
		(uint8_t*)font_0x00000072	// data
	}
};

static const uint8_t font_0x00000063[18] = // c
{
	0x30, 0xBB, 0x04, 
	0xC2, 0x01, 0x02, 
	0x76, 0x00, 0x00, 
	0x76, 0x00, 0x00, 
	0xC2, 0x01, 0x03, 
	0x40, 0xBB, 0x05
};

static const uint8_t font_0x00000073[18] = // s
{
	0x80, 0x8C, 0x00, 
	0x85, 0x20, 0x00, 
	0xB2, 0x06, 0x00, 
	0x00, 0xC5, 0x01, 
	0x13, 0xA0, 0x03, 
	0xA3, 0x7C, 0x00
};

static const Font::fontInfo_t fontData3[2]
{
	{								// c
		0x00000063,					// utf8 code
		5,							// width
		6,							// height
		0,							// x position
		3,							// y position
		(uint8_t*)font_0x00000063	// data
	},
	{								// s
		0x00000073,					// utf8 code
		5,							// width
		6,							// height
		0,							// x position
		3,							// y position
		(uint8_t*)font_0x00000073	// data
	}
};

static const uint8_t font_0x00000074[16] = // t
{
	0x50, 0x00, 
	0xF0, 0x00, 
	0xFA, 0x5D, 
	0xF0, 0x00, 
	0xF0, 0x00, 
	0xF0, 0x00, 
	0xC0, 0x01, 
	0x50, 0x5C
};

static const Font::fontInfo_t fontData4[1]
{
	{								// t
		0x00000074,					// utf8 code
		4,							// width
		8,							// height
		0,							// x position
		1,							// y position
		(uint8_t*)font_0x00000074	// data
	}
};

static const uint8_t font_0x00000065[18] = // e
{
	0x40, 0xBB, 0x03, 
	0xA3, 0x10, 0x0C, 
	0xD6, 0xAA, 0x1E, 
	0x75, 0x00, 0x00, 
	0xC1, 0x01, 0x02, 
	0x30, 0xBB, 0x06
};

static const uint8_t font_0x0000006D[30] = // m
{
	0xB2, 0xC7, 0x55, 0x8C, 0x00, 
	0xE2, 0x13, 0x5F, 0xA0, 0x02, 
	0xC2, 0x00, 0x1D, 0x70, 0x05, 
	0xC2, 0x00, 0x1D, 0x70, 0x05, 
	0xC2, 0x00, 0x1D, 0x70, 0x05, 
	0xC2, 0x00, 0x1D, 0x70, 0x05
};

static const Font::fontInfo_t fontData5[2]
{
	{								// e
		0x00000065,					// utf8 code
		6,							// width
		6,							// height
		0,							// x position
		3,							// y position
		(uint8_t*)font_0x00000065	// data
	},
	{								// m
		0x0000006D,					// utf8 code
		9,							// width
		6,							// height
		0,							// x position
		3,							// y position
		(uint8_t*)font_0x0000006D	// data
	}
};

static const uint8_t font_0x00000066[18] = // f
{
	0x40, 0x4B, 
	0xC0, 0x01, 
	0xF1, 0x00, 
	0xF9, 0x2C, 
	0xF1, 0x00, 
	0xF1, 0x00, 
	0xF1, 0x00, 
	0xF1, 0x00, 
	0xF1, 0x00
};

static const uint8_t font_0x0000002E[2] = // .
{
	0x40, 
	0xA2
};

static const uint8_t font_0x0000006E[18] = // n
{
	0xB2, 0xC7, 0x07, 
	0xE2, 0x13, 0x1C, 
	0xC2, 0x00, 0x3A, 
	0xC2, 0x00, 0x3A, 
	0xC2, 0x00, 0x3A, 
	0xC2, 0x00, 0x3A
};

static const uint8_t font_0x00000076[18] = // v
{
	0x2C, 0x10, 0x0D, 
	0x66, 0x40, 0x07, 
	0xB2, 0x80, 0x03, 
	0xB0, 0xD2, 0x00, 
	0x60, 0x7B, 0x00, 
	0x20, 0x3F, 0x00
};

static const Font::fontInfo_t fontData6[4]
{
	{								// f
		0x00000066,					// utf8 code
		4,							// width
		9,							// height
		0,							// x position
		0,							// y position
		(uint8_t*)font_0x00000066	// data
	},
	{								// .
		0x0000002E,					// utf8 code
		2,							// width
		2,							// height
		0,							// x position
		7,							// y position
		(uint8_t*)font_0x0000002E	// data
	},
	{								// n
		0x0000006E,					// utf8 code
		6,							// width
		6,							// height
		0,							// x position
		3,							// y position
		(uint8_t*)font_0x0000006E	// data
	},
	{								// v
		0x00000076,					// utf8 code
		5,							// width
		6,							// height
		0,							// x position
		3,							// y position
		(uint8_t*)font_0x00000076	// data
	}
};

static const uint8_t font_0x0000002F[20] = // /
{
	0x00, 0xA1, 
	0x00, 0x54, 
	0x00, 0x28, 
	0x00, 0x0B, 
	0x30, 0x06, 
	0x70, 0x02, 
	0xB0, 0x00, 
	0x73, 0x00, 
	0x37, 0x00, 
	0x0B, 0x00
};

static const uint8_t font_0x0000006F[18] = // o
{
	0x40, 0xBB, 0x04, 
	0xC2, 0x11, 0x2C, 
	0x76, 0x00, 0x67, 
	0x76, 0x00, 0x67, 
	0xC2, 0x00, 0x2B, 
	0x40, 0xBB, 0x04
};

static const uint8_t font_0x00000067[24] = // g
{
	0x60, 0xFC, 0x4D, 
	0xA3, 0x40, 0x08, 
	0xA3, 0x40, 0x08, 
	0xC0, 0x9B, 0x01, 
	0x92, 0x00, 0x00, 
	0xE1, 0xCD, 0x18, 
	0x65, 0x00, 0x58, 
	0x71, 0xAA, 0x06
};

static const Font::fontInfo_t fontData7[3]
{
	{								// /
		0x0000002F,					// utf8 code
		4,							// width
		10,							// height
		0,							// x position
		1,							// y position
		(uint8_t*)font_0x0000002F	// data
	},
	{								// o
		0x0000006F,					// utf8 code
		6,							// width
		6,							// height
		0,							// x position
		3,							// y position
		(uint8_t*)font_0x0000006F	// data
	},
	{								// g
		0x00000067,					// utf8 code
		6,							// width
		8,							// height
		0,							// x position
		3,							// y position
		(uint8_t*)font_0x00000067	// data
	}
};
static const CodeFont::codeFontInfo_t codeFontInfo = 
{
	10,
	{2, 3, 2, 2, 1, 2, 4, 3},
	{
		fontData0,
		fontData1,
		fontData2,
		fontData3,
		fontData4,
		fontData5,
		fontData6,
		fontData7
	}
};

CodeFont Font_Noto_Sans_CJK_HK_DemiLight_10(&codeFontInfo);


