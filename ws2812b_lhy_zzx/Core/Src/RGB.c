#include "RGB.h"
#include "main.h"
#include "tim.h"

uint16_t RGB_buffur[Reste_Data + WS2812_Data_Len] = { 0 };

void WS2812_Display_1(uint32_t Color, uint16_t num)
{
   

    uint16_t* p = (RGB_buffur + Reste_Data) + (num * Led_Data_Len);
    
    for (uint8_t i = 0; i < 8; ++i)         
			p[i+8]= (((Color << i) & 0X800000) ? Hight_Data :Low_Data);
    for (uint8_t i = 8; i < 16; ++i)
			p[i-8]= (((Color << i) & 0X800000) ? Hight_Data :Low_Data);
    for (uint8_t i = 16; i < 24; ++i)
			p[i]= (((Color << i) & 0X800000) ? Hight_Data :Low_Data);  
       
}

void WS2812_Number_4(uint32_t Color1,uint32_t Color2,uint32_t Color3,uint32_t Color4)
{
    
    uint16_t  RGB_Buff_4[Reste_Data + 4 * WS2812_Data_Len] = { 0 };
    uint16_t* p;
    uint32_t Color;
    
    for( uint8_t k=0;k<4;k++)
  {      
      switch (k)
      {
        case 0: p= (RGB_Buff_4 + Reste_Data) + (0 * Led_Data_Len),Color=Color1;break;
        case 1: p= (RGB_Buff_4 + Reste_Data) + (1 * Led_Data_Len),Color=Color2;break;
        case 2: p= (RGB_Buff_4 + Reste_Data) + (2 * Led_Data_Len),Color=Color3;break;
        case 3: p= (RGB_Buff_4 + Reste_Data) + (3 * Led_Data_Len),Color=Color4;break;
        default : ;break;     
      }
      
     for (uint8_t i = 0; i < 8; ++i)
    {   
        for (uint8_t i = 0; i < 8; ++i)
					p[i+8]= (((Color << i) & 0X800000) ? Hight_Data :Low_Data);
        for (uint8_t i = 8; i < 16; ++i)
					p[i-8]= (((Color << i) & 0X800000) ? Hight_Data :Low_Data);
        for (uint8_t i = 16; i < 24; ++i)
					p[i]= (((Color << i) & 0X800000) ? Hight_Data :Low_Data);
    } 
   
 }   
  
    HAL_TIM_PWM_Start_DMA(&htim1,TIM_CHANNEL_1,(uint32_t *)RGB_Buff_4,(176));
    
}

void HAL_TIM_PWM_PulseFinishedCallback(TIM_HandleTypeDef *htim)
{
    HAL_TIM_PWM_Stop_DMA(&htim1,TIM_CHANNEL_1);
}



