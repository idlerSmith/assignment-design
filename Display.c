#include "Display.h"
#include "Bitchoose.h"

uint16_t num_display[]={0xC0,0xF9,0xA4,0xB0,0x99,0x92,0x82,0xF8,0x80,0x90};
uint16_t num_display_DP[]={0x40,0x79,0x24,0x30,0x19,0x12,0x02,0x78,0x00,0x10};

extern uint16_t hund_num,sec_num,min_num,hour_num;
extern uint16_t hund_num_set,sec_num_set,min_num_set,hour_num_set;
extern uint8_t adjust_flag;

void Display(uint16_t num)
{
	GPIOA->ODR = num; 
}

void Display_clear(void)
{
	GPIOA->ODR = 0xff;
}

void Display_max8(void)
{
		uint16_t hour,min,sec,hund;
	
		if(adjust_flag)
		{
			hour = hour_num_set;
			min = min_num_set;
			sec = sec_num_set;
			hund = hund_num_set;
		}
		else
		{
			hour = hour_num;
			min = min_num;
			sec = sec_num;
			hund =hund_num;
		}
	
		bitchoose(1);
    Display(num_display[hour / 10]);
    HAL_Delay(5);
    
    bitchoose(2);
    Display(num_display_DP[hour % 10]);
    HAL_Delay(5);
    
    bitchoose(3);
    Display(num_display[min / 10]);
    HAL_Delay(5);
    
    bitchoose(4);
    Display(num_display_DP[min % 10]);
    HAL_Delay(5);
    
    bitchoose(5);
    Display(num_display[sec / 10]); 
    HAL_Delay(5);
    
    bitchoose(6);
    Display(num_display_DP[sec % 10]);
    HAL_Delay(5);
    
    bitchoose(7);
    Display(num_display[hund/ 10]);
    HAL_Delay(5);
    
    bitchoose(8);
    Display(num_display[hund % 10]);
    HAL_Delay(5);
}


