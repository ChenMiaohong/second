/**
  ******************************************************************************
  * @file    main.c
  * @author  fire
  * @version V1.0
  * @date    2013-xx-xx
  * @brief   用3.5.0版本库建的工程模板
  ******************************************************************************
  * @attention
  *
  * 实验平台:野火 iSO STM32 开发板 
  * 论坛    :http://www.chuxue123.com
  * 淘宝    :http://firestm32.taobao.com
  *
  ******************************************************************************
  */
  
#include "stm32f10x.h"
#include "SysTick.h"
#include "LED.h"

/**
  * @brief  主函数
  * @param  无
  * @retval 无
  */
int main(void)
{
	LED_GPIO_Config();
	SysTick_Init();
	for(;;)
	{LED1(ON);
		Delay_us(10000);
		LED1(OFF);
		LED2(ON);
		Delay_us(10000);
		LED2(OFF);
		LED3(ON);
		Delay_us(10000);
		LED3(OFF);
}
	  /* add your code here ^_^. */
}

/*********************************************END OF FILE**********************/

