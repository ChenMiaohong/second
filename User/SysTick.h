#ifndef __SysTick_H
#define __SysTick_H
void SysTick_Init();
void Delay_us(__IO u32 nTime);
//void TimingDelay_Decrement();
#define Delay_ms(x) Delay_us(100*x)
#endif
