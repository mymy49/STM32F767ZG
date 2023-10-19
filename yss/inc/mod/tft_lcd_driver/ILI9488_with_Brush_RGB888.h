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
// Copyright 2023. 홍윤기 all right reserved.
//
////////////////////////////////////////////////////////////////////////////////////////

#ifndef YSS_MOD_TFT_LCD_DRIVER_ILI9488_WITH_BRUSH__H_
#define YSS_MOD_TFT_LCD_DRIVER_ILI9488_WITH_BRUSH__H_

#include "ILI9488.h"
#include <gui/BrushRgb888.h>
#include <gui/Bmp888Buffer.h>
#include <gui/Color.h>

class ILI9488_with_Brush_RGB888 : public ILI9488, public BrushRgb888
{
  protected:
	Bmp888Buffer *mBmp888Brush;
	uint32_t mBmp888BufferSize;

  public:
	ILI9488_with_Brush_RGB888(void);
	void setBmp888Buffer(Bmp888Buffer &obj);

	// Brush
	void drawDot(int16_t x, int16_t y); // virtual 0
	void drawDot(int16_t x, int16_t y, uint16_t color); // virtual 0
	void drawDot(int16_t x, int16_t y, uint32_t color); // virtual 0
	void drawDot(int16_t x, int16_t y, Color color); // virtual 0
	void drawFontDot(int16_t x, int16_t y, uint8_t color); // virtual 0
	void eraseDot(Position_t pos); // virtual 0
	void clear(void); // virtual
	void fillRect(Position_t p1, Position_t p2);
	void fillRect(Position_t pos, Size_t size);
	void drawBmp(Position_t pos, const Bmp888 *image);
};

#endif