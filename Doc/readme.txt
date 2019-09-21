/**
  ******************************************************************************
  * @file    readme.txt
  * @author  ��Ԫ
  * @version V1.0
  * @date    2016-4-4
  * @brief   ���ڼ�¼�����ĵ��ı����־
  ******************************************************************************
  * @attention
  *
  * оƬ�ͺ�: STM32F103VET6 
  *
  ******************************************************************************
  */ 
  2016.4.12  xiaoyuan
  �ù����ļ��ṹ��
  USER-------stm32f10x.c,stm32f10x.h���жϷ���������stm32f10x_conf.h��Ƭ����������ͷ�ļ�����main.c����������
  HARDWARE---����û���д��Ӳ����Դ����
  FWLIB------STM32F10x_StdPeriph_Lib_V3.5.0 ��V3.5�̼��⣩
  CMSIS------system_stm32f10x.c,core_cm3.c  ���������躯���ļ�����stm32f10x.h ������Ĵ���������ж��������壩  
             system_stm32f10x.h,core_cm3.h
  STARTCODE--��������
  DOC--------����˵���ĵ�
  
  һЩ��Ҫ�ļ��Ľ��ܣ�
  core_cm3.c��core_cm3.h��λ��CMSIS��׼�ĺ����豸�������CM3��ͨ���ļ���ΪоƬ�����ṩһ������CM3�ں˵Ľӿ�
  system_stm32f10x.c��system_stm32f10x.h ����ϵͳ��ʱ�Ӻ�����ʱ�ӡ�
  stm32f10x.h ������STM32�мĴ�����ַ�ͽṹ�����Ͷ��壬��ʹ�õ�STM32�̼���ĵط���Ҫ�������ͷ�ļ���
  �����ļ������κδ��������ϵ縴λ֮���������е�һ�λ������û������ΪC���Ե����н���һ�����ʵ����л�����
           ��1����ʼ����ջָ��SP
		   ��2����ʼ�����������ָ��PC
		   ��3�����ö�ջ�Ĵ�С
		   ��4�������쳣���������ڵ�ַ
		   ��5�������ⲿSRAM��Ϊ���ݴ洢�� �����û����ã�
		   ��6������C��ķ�֧���__main��������������main������
		   
�������͵�һЩ���壬������stdint.h�ļ��У�
/* exact-width signed integer types */
typedef   signed          char int8_t;   //�ַ��ͱ���
typedef   signed short     int int16_t;  //�з��Ŷ�����
typedef   signed           int int32_t;  //�з��ų�����
typedef   signed       __INT64 int64_t;

/* exact-width unsigned integer types */
typedef unsigned          char uint8_t;   //�޷����ַ��� 
typedef unsigned short     int uint16_t;  //�޷��Ŷ�����
typedef unsigned           int uint32_t;  //�޷��ų�����
typedef unsigned       __INT64 uint64_t;

/* �汾������־ */
��V2.0.0��ΪStmarlin 3D��ӡ���̼�����ʼ�汾��

  2018/2/4 Stmarlin V2.0.0
1.�ð汾�ܹ�ʵ��ͨ����λ������ʵ�ִ�ӡ���ܣ���δ�������ԣ���ĿǰΪ��֧��SD������֧��LCD��Ļ��ʾ��
2.�ð汾�Ǵ�֮ǰ��ֲ�����ϼ����Ż�������3D��ӡ���̼�����ǰ��������֧���Լ�DIY��3D��ӡ�����˿��������ɺ͵�ʱ��Ƶ�Ӳ��ƥ�䡣
3.�ڲ����������ģ���·���滮ģ��ֱ������˵��Կ��أ�����ͨ����.h�ļ��ж���ĵ��Կ��أ�����������ģʽ��ͨ����Щ���Կ��ؿ��Ժܷ���������е�ԭ��
4.��������fastio.h����ʵ��������ԭ��marlin�̼��е�WRITE�Ⱥ�����pin.h�ļ���ֻ���ƶ����źţ��磺PF10�ȣ����ɡ��ں���������������ʵ��
  ��������֧����Ҫ�������ļ��ж�������Ӧ�����Ŷ���֧�֣�������Ӧ���ܳ�ʼ�������г�ʼ�������š�
5.ȥ����ԭ�汾�е�include_config.h������������Ҫ�õ���ͷ�ļ������������ͷ�ļ�����д�������һЩ���㣬����ʹ����Ч�ʽ��ͣ�Ҳ��ʹ���ļ�
  ������ϵ��������ȷ���ļ�����Ҫֻ�������ļ��õ���ͷ�ļ�����������Ƿֲ㼶�ģ��ļ�����Ҫ���������ļ������ײ��ļ����ײ��ļ�������Ҫ���������ļ�
	ͬһ�㼶���ļ�֮����Ի��������
6.�淶�˹����еĴ����񣬰����°�marlin�̼������淶�ķ��ע�͹淶�в���׼�������������ơ�
7.�����Ż��˹��̽ṹ������ṹ�ɲο�Stmarlin Keil MDK ����Ŀ¼.mmap�����������ļ��������·��࣬��Щ�ļ�����Ϊ�գ��Ǻ����Ż�����ʱ��Ҫ�������ġ�
8.�ð汾����C99��׼��Ҫ��ѡ������C/C++����ѡ��C99������Ҫ֧��printf����Ҫ��ѡ���й�ѡ��ʹ��΢�⡣

 2018/2/4 Stmarlin V2.0.1
Ŀ�꣺Ϊ��������֧��SD���Ĵ���
1.����sdio�İ弶֧�ִ���   OK
2.��ֲFATFS�ļ�ϵͳ        OK
3.����stmarlin����֧��    OK
4.������Ļ�˵�  OK

2018/3/10
���ñ�׼�⺯��ʵ����������
/**
 * Fast I/O interfaces for STM32F1
 * These use GPIO functions instead of Direct Port Manipulation, as on AVR.
 */

#ifndef _FASTIO_STM32F1_H
#define _FASTIO_STM32F1_H

#include <libmaple/gpio.h>

#define READ(IO)              (PIN_MAP[IO].gpio_device->regs->IDR & (1U << PIN_MAP[IO].gpio_bit) ? HIGH : LOW)
#define WRITE(IO, v)          (PIN_MAP[IO].gpio_device->regs->BSRR = (1U << PIN_MAP[IO].gpio_bit) << (16 * !(bool)v))
#define TOGGLE(IO)            (PIN_MAP[IO].gpio_device->regs->ODR = PIN_MAP[IO].gpio_device->regs->ODR ^ (1U << PIN_MAP[IO].gpio_bit))
#define WRITE_VAR(IO, v)      WRITE(io, v)

#define _GET_MODE(IO)         (gpio_get_mode(PIN_MAP[IO].gpio_device, PIN_MAP[IO].gpio_bit))
#define _SET_MODE(IO,M)       do{ gpio_set_mode(PIN_MAP[IO].gpio_device, PIN_MAP[IO].gpio_bit, M); } while (0)
#define _SET_OUTPUT(IO)       _SET_MODE(IO, GPIO_OUTPUT_PP)

#define SET_INPUT(IO)         _SET_MODE(IO, GPIO_INPUT_FLOATING)
#define SET_INPUT_PULLUP(IO)  _SET_MODE(IO, GPIO_INPUT_PU)
#define SET_OUTPUT(IO)        do{ _SET_OUTPUT(IO); WRITE(IO, LOW); }while(0)

#define GET_INPUT(IO)         (_GET_MODE(IO) == GPIO_INPUT_FLOATING || _GET_MODE(IO) == GPIO_INPUT_ANALOG || _GET_MODE(IO) == GPIO_INPUT_PU || _GET_MODE(IO) == GPIO_INPUT_PD)
#define GET_OUTPUT(IO)        (_GET_MODE(IO) == GPIO_OUTPUT_PP)
#define GET_TIMER(IO)         (PIN_MAP[IO].timer_device != NULL)

#define OUT_WRITE(IO, v)      { _SET_OUTPUT(IO); WRITE(IO, v); }
/**
 * TODO: Write a macro to test if PIN is PWM or not.
 */
#define PWM_PIN(p)            true

#endif // _FASTIO_STM32F1_H

2018/4/6
���Ե�ǰ����
    ��ǰ�������в��������⣬��ͷ�ڴ�ӡ����������Ī���������X���Y���˶������λ�û���Сλ���ٷ��ء�
		ͨ�����Է�����stmarlin.c�ļ���process_command()������stepper.c�ļ��еĲ�������жϷ����������⣬����ԭ�򻹲������
		ͨ�����������ִ����滻Ϊԭ���Ĵ��뼴���������У�ֻ�滻һ��������Ȼ���ڡ�

2018/4/8
stmarlin 2.0.1 �汾������ԭ�������Ĵ�ӡ���̼���������ȫ��������ˣ�����ӵĲ��ִ�����Ȼ�Ƚ��ң���δ������ȫ���������Կ���
ͨ����Ļ����������ӡ������Դ˰���Ϊ���ݺ������������롣