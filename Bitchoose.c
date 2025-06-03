#include "Bitchoose.h"
#include "main.h" 


void bitchoose(uint16_t num)
{
	switch(num)
	{
		case 1:
			HAL_GPIO_WritePin(B1_GPIO_Port,B1_Pin,GPIO_PIN_SET);
			HAL_GPIO_WritePin(B2_GPIO_Port,B2_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(B3_GPIO_Port,B3_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(B4_GPIO_Port,B4_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(B5_GPIO_Port,B5_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(B6_GPIO_Port,B6_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(B7_GPIO_Port,B7_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(B8_GPIO_Port,B8_Pin,GPIO_PIN_RESET);
			break;
		case 2:
			HAL_GPIO_WritePin(B1_GPIO_Port,B1_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(B2_GPIO_Port,B2_Pin,GPIO_PIN_SET);
			HAL_GPIO_WritePin(B3_GPIO_Port,B3_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(B4_GPIO_Port,B4_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(B5_GPIO_Port,B5_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(B6_GPIO_Port,B6_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(B7_GPIO_Port,B7_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(B8_GPIO_Port,B8_Pin,GPIO_PIN_RESET);
			break;
		case 3:
			HAL_GPIO_WritePin(B1_GPIO_Port,B1_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(B2_GPIO_Port,B2_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(B3_GPIO_Port,B3_Pin,GPIO_PIN_SET);
			HAL_GPIO_WritePin(B4_GPIO_Port,B4_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(B5_GPIO_Port,B5_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(B6_GPIO_Port,B6_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(B7_GPIO_Port,B7_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(B8_GPIO_Port,B8_Pin,GPIO_PIN_RESET);
			break;
		case 4:
			HAL_GPIO_WritePin(B1_GPIO_Port,B1_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(B2_GPIO_Port,B2_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(B3_GPIO_Port,B3_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(B4_GPIO_Port,B4_Pin,GPIO_PIN_SET);
			HAL_GPIO_WritePin(B5_GPIO_Port,B5_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(B6_GPIO_Port,B6_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(B7_GPIO_Port,B7_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(B8_GPIO_Port,B8_Pin,GPIO_PIN_RESET);
			break;
		case 5:
			HAL_GPIO_WritePin(B1_GPIO_Port,B1_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(B2_GPIO_Port,B2_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(B3_GPIO_Port,B3_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(B4_GPIO_Port,B4_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(B5_GPIO_Port,B5_Pin,GPIO_PIN_SET);
			HAL_GPIO_WritePin(B6_GPIO_Port,B6_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(B7_GPIO_Port,B7_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(B8_GPIO_Port,B8_Pin,GPIO_PIN_RESET);
			break;
		case 6:
			HAL_GPIO_WritePin(B1_GPIO_Port,B1_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(B2_GPIO_Port,B2_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(B3_GPIO_Port,B3_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(B4_GPIO_Port,B4_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(B5_GPIO_Port,B5_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(B6_GPIO_Port,B6_Pin,GPIO_PIN_SET);
			HAL_GPIO_WritePin(B7_GPIO_Port,B7_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(B8_GPIO_Port,B8_Pin,GPIO_PIN_RESET);
			break;
		case 7:
			HAL_GPIO_WritePin(B1_GPIO_Port,B1_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(B2_GPIO_Port,B2_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(B3_GPIO_Port,B3_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(B4_GPIO_Port,B4_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(B5_GPIO_Port,B5_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(B6_GPIO_Port,B6_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(B7_GPIO_Port,B7_Pin,GPIO_PIN_SET);
			HAL_GPIO_WritePin(B8_GPIO_Port,B8_Pin,GPIO_PIN_RESET);
			break;	
		case 8:
			HAL_GPIO_WritePin(B1_GPIO_Port,B1_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(B2_GPIO_Port,B2_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(B3_GPIO_Port,B3_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(B4_GPIO_Port,B4_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(B5_GPIO_Port,B5_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(B6_GPIO_Port,B6_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(B7_GPIO_Port,B7_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(B8_GPIO_Port,B8_Pin,GPIO_PIN_SET);
			break;			 
	}
}
