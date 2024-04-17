#ifndef __RGB_H
#define __RGB_H
#include "main.h"
#define Hight_Data            ( 64  )
#define Low_Data              ( 36  )
#define Reste_Data            ( 80  )
#define Led_Num               (  4  )
#define Led_Data_Len          ( 24  )
#define WS2812_Data_Len   (Led_Num * Led_Data_Len)

void WS2812_Display_1(uint32_t Color, uint16_t num);
void WS2812_Number_4(uint32_t Color1,uint32_t Color2,uint32_t Color3,uint32_t Color4);

#endif
