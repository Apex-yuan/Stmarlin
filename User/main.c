/**
  ******************************************************************************
  * @file    main.c
  * @author  xiaoyuan
  * @version V2.0.0
  * @date    2018-1-29
  * @brief   �ṩC�������������
  ******************************************************************************
  * @attention
  *
  ******************************************************************************
  */
  
#include "stmarlin.h"
#include "usart.h"
#include "timer.h"
#include "delay.h"


/**
  * @brief  C������������һ��C���Ժ���ִ����ʼ�ĵط�
  * @param  none
  * @retval none
  */
int main(void)
{	
  NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);// �����ж����ȼ�����2

  delay_init();			     //��ʱ��ʼ��
 	Usart1Init(BAUDRATE); 	 //����1��ʼ��  
  TIM3_Int_Init(9,7199);  //���ڷ���ϵͳ����ʱ�䣨1ms��ʱ�жϣ�
  
 	setup(); //ִ�д�ӡ��������ĳ�ʼ������
	
	while(1) 
	{		
		loop(); //��ӡ����ѭ����
	}
  //return 0;
}
