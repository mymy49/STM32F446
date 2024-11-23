/*
 * Copyright (c) 2024 Yoon-Ki Hong
 *
 * This file is subject to the terms and conditions of the MIT License.
 * See the file "LICENSE" in the main directory of this archive for more details.
 */

#include <bsp.h>
#include <yss/instance.h>

MSP3520 lcd;

Bmp888Buffer frame(10000);

FunctionQueue fq(16);

Pwm *gBlPwm;

void initializeBoard(void)
{
	// USART2 초기화
	gpioA.setAsAltFunc(2, Gpio::PA2_USART2_TX);
	gpioA.setAsAltFunc(3, Gpio::PA3_USART2_RX);
	
	usart2.enableClock();
	usart2.initialize(115200, 128);
	usart2.enableInterrupt();

	// SPI1 초기화
	gpioB.setAsAltFunc(3, Gpio::PB3_SPI1_SCK, Gpio::OSPEED_HIGH);
	gpioB.setAsAltFunc(4, Gpio::PB4_SPI1_MISO, Gpio::OSPEED_HIGH);
	gpioB.setAsAltFunc(5, Gpio::PB5_SPI1_MOSI, Gpio::OSPEED_HIGH);

	spi1.enableClock();
	spi1.initializeAsMain();
	spi1.enableInterrupt();

	// LED 초기화
	Led::initialize();

	// Key 초기화
	Key::initialize();

	// Speaker 초기화
	Speaker::initialize();

	// LCD 초기화
	gpioB.setAsAltFunc(0, Gpio::PB0_TIM3_CH3);	// 백라이트
	gpioB.setAsOutput(6, Gpio::OSPEED_HIGH);	// LCD_CS
	gpioB.setAsOutput(10, Gpio::OSPEED_HIGH);	// LCD_DC
	gpioA.setAsOutput(8);						// LCD_RST
	
	gBlPwm = &pwm3Ch3;
	gBlPwm->enableClock();
	gBlPwm->initialize(10000);
	gBlPwm->start();

	MSP3520::Config lcdConfig = 
	{
		spi1,			//Spi &peri;
		{&gpioB, 6},	//Gpio::Pin chipSelect;
		{&gpioB, 10},	//Gpio::Pin dataCommand;
		{&gpioA, 8}		//Gpio::Pin reset;
	};

	lcd.setConfig(lcdConfig);
	lcd.setBmp888Buffer(frame);
	lcd.initialize();
	lcd.setDirection(false, true, true);
	lcd.clear();
}

void setLcdBackLight(float dimming)
{
	gBlPwm->setRatio(dimming);
}

void fadeinBackLight(void)
{
	// 백라이트를 Fade in 한다.
	for(uint32_t i=0;i<=100;i++)
	{
		setLcdBackLight((float)i/100.f);
		thread::delay(5);
	}
}

void fadeoutBackLight(void)
{
	// 백라이트를 Fade out 한다.
	for(uint32_t i=0;i<=100;i++)
	{
		setLcdBackLight((float)(100-i)/100.f);
		thread::delay(5);
	}
}