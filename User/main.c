/**
  ******************************************************************************
  * @file    main.c
  * @author  fire
  * @version V1.0
  * @date    2013-xx-xx
  * @brief   ��3.5.0�汾�⽨�Ĺ���ģ��
  ******************************************************************************
  * @attention
  *
  * ʵ��ƽ̨:Ұ�� iSO STM32 ������ 
  * ��̳    :http://www.chuxue123.com
  * �Ա�    :http://firestm32.taobao.com
  *
  ******************************************************************************
  */
  
#include "stm32f10x.h"
#include "SysTick.h"
#include "LED.h"

/**
  * @brief  ������
  * @param  ��
  * @retval ��
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

