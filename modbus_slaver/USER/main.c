#include "sys.h"	
#include "delay.h"	
#include "modbus.h"
#include "led.h"
#include "key.h"

 
/************************************************
 ALIENTEK战舰STM32开发板实验2
 蜂鸣器实验
 技术支持：www.openedv.com
 淘宝店铺：http://eboard.taobao.com 
 关注微信公众平台微信号："正点原子"，免费获取STM32资料。
 广州市星翼电子科技有限公司  
 作者：正点原子 @ALIENTEK
************************************************/

 int main(void)
 {
	delay_init();	    	 //延时函数初始化
	KEY_Init();
	RS485_Init();
	Timer7_Init();
	LED_Init();
	while(1)
	{
		RS485_Service();
	}
 }

