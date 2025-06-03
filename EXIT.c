#include "EXIT.h"
#include "Display.h"
#include <main.h>

extern uint16_t hund_num,sec_num,min_num,hour_num;
extern uint16_t hund_num_set,sec_num_set,min_num_set,hour_num_set;
uint8_t adjust_flag=0;

void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin)
{
	if(HAL_GPIO_ReadPin(K_S_GPIO_Port,K_S_Pin) == GPIO_PIN_RESET)
	{
		if(!adjust_flag)
		{
			hund_num_set = hund_num;
			sec_num_set = sec_num;
			min_num_set = min_num;
			hour_num_set = hour_num;
			adjust_flag=1;
		}
		else
		{
			hund_num = hund_num_set;
			sec_num = sec_num_set;
			min_num = min_num_set;
			hour_num = hour_num_set;
			adjust_flag=0;
		}
	}
	
	if(HAL_GPIO_ReadPin(K_C_GPIO_Port,K_C_Pin) == GPIO_PIN_RESET)
	{
		adjust_flag=0;
	}
	
	if(HAL_GPIO_ReadPin(K1_GPIO_Port,K1_Pin) == GPIO_PIN_RESET)
	{
		if(hour_num_set < 23)
			hour_num_set++; 
		else
			hour_num_set=0;
	}
	if(HAL_GPIO_ReadPin(K2_GPIO_Port,K2_Pin) == GPIO_PIN_RESET)
	{
		if(min_num_set < 59)
			min_num_set++; 
		else
		{
			min_num_set=0;
			hour_num_set++;
		}	
	}
	if(HAL_GPIO_ReadPin(K3_GPIO_Port,K3_Pin) == GPIO_PIN_RESET)
	{
		if(sec_num_set < 59)
			sec_num_set++; 
		else
		{
			sec_num_set=0;
			min_num_set++;
		}	
	}
	if(HAL_GPIO_ReadPin(K4_GPIO_Port,K4_Pin) == GPIO_PIN_RESET)
	{
		if(hund_num_set < 99)
			hund_num_set++; 
		else
		{
			hund_num_set=0;
			sec_num_set++;
		}	
	}
}
