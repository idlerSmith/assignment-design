#ifndef EXIT_H
#define EXIT_H


#include "stm32f1xx_hal.h"   
#include "main.h"           




void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin);

#endif // EXIT_H