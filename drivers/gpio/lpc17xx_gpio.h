/**
  ******************** (C) COPYRIGHT 2010 DJI **********************************
  *
  * @Project Name       ��xp60.uvproj
  * @File Name          : lpc17xx_clkpwr_ctl.h
  * @Environment        : keil mdk4.12/LPC1765/100M cclock
  * @Author&Date        : 2011-01-27 
  * @Version            : 1.00
  ******************************************************************************
  * @Description
  *	    lpc17xx clock and power control        
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __LPC17XX_GPIO_H__
#define __LPC17XX_GPIO_H__

/* Includes ------------------------------------------------------------------*/

/* Exported define -----------------------------------------------------------*/
/*         GPIO related register         */
/* GPIO PINSEL REGISTER GROUP */
#define  GPIO_REG_PINSEL_BASE_ADDR                             (CPU_INT32U  )(0x4002C000)

#define  GPIO_REG_PINSEL0                                      (*(CPU_REG32 *)GPIO_REG_PINSEL_BASE_ADDR + 0x00)
#define  GPIO_REG_PINSEL1                                      (*(CPU_REG32 *)GPIO_REG_PINSEL_BASE_ADDR + 0x04)
#define  GPIO_REG_PINSEL2                                      (*(CPU_REG32 *)GPIO_REG_PINSEL_BASE_ADDR + 0x08)
#define  GPIO_REG_PINSEL3                                      (*(CPU_REG32 *)GPIO_REG_PINSEL_BASE_ADDR + 0x0C)
#define  GPIO_REG_PINSEL4                                      (*(CPU_REG32 *)GPIO_REG_PINSEL_BASE_ADDR + 0x10)
#define  GPIO_REG_PINSEL5                                      (*(CPU_REG32 *)GPIO_REG_PINSEL_BASE_ADDR + 0x14)
#define  GPIO_REG_PINSEL6                                      (*(CPU_REG32 *)GPIO_REG_PINSEL_BASE_ADDR + 0x18)
#define  GPIO_REG_PINSEL7                                      (*(CPU_REG32 *)GPIO_REG_PINSEL_BASE_ADDR + 0x1C)
#define  GPIO_REG_PINSEL8                                      (*(CPU_REG32 *)GPIO_REG_PINSEL_BASE_ADDR + 0x20)
#define  GPIO_REG_PINSEL9                                      (*(CPU_REG32 *)GPIO_REG_PINSEL_BASE_ADDR + 0x24)
#define  GPIO_REG_PINSEL10                                     (*(CPU_REG32 *)GPIO_REG_PINSEL_BASE_ADDR + 0x28)

/* GPIO PINMODE REGISTER GROUP */
#define  GPIO_REG_PINMODE_BASE_ADDR                            (CPU_INT32U  )(0x4002C040)

#define  GPIO_REG_PINMODE0                                     (*(CPU_REG32 *)GPIO_REG_PINMODE_BASE_ADDR + 0x00)
#define  GPIO_REG_PINMODE1                                     (*(CPU_REG32 *)GPIO_REG_PINMODE_BASE_ADDR + 0x04)
#define  GPIO_REG_PINMODE2                                     (*(CPU_REG32 *)GPIO_REG_PINMODE_BASE_ADDR + 0x08)
#define  GPIO_REG_PINMODE3                                     (*(CPU_REG32 *)GPIO_REG_PINMODE_BASE_ADDR + 0x0C)
#define  GPIO_REG_PINMODE4                                     (*(CPU_REG32 *)GPIO_REG_PINMODE_BASE_ADDR + 0x10)
#define  GPIO_REG_PINMODE5                                     (*(CPU_REG32 *)GPIO_REG_PINMODE_BASE_ADDR + 0x14)
#define  GPIO_REG_PINMODE6                                     (*(CPU_REG32 *)GPIO_REG_PINMODE_BASE_ADDR + 0x18)
#define  GPIO_REG_PINMODE7                                     (*(CPU_REG32 *)GPIO_REG_PINMODE_BASE_ADDR + 0x1C)
#define  GPIO_REG_PINMODE8                                     (*(CPU_REG32 *)GPIO_REG_PINMODE_BASE_ADDR + 0x20)
#define  GPIO_REG_PINMODE9                                     (*(CPU_REG32 *)GPIO_REG_PINMODE_BASE_ADDR + 0x24)

/* GPIO PORTx_FAST REGISTER GROUP */
#define  GPIO_REG_PORTx_FAST_BASE_ADDR                         ((CPU_INT32U)0x2009C000)
#define  GPIO_REG_PORT0_FAST_BASE_ADDR                         ((CPU_INT32U)(GPIO_REG_PORTx_FAST_BASE_ADDR + 0x00))
#define  GPIO_REG_PORT1_FAST_BASE_ADDR                         ((CPU_INT32U)(GPIO_REG_PORTx_FAST_BASE_ADDR + 0x20))
#define  GPIO_REG_PORT2_FAST_BASE_ADDR                         ((CPU_INT32U)(GPIO_REG_PORTx_FAST_BASE_ADDR + 0x40))
#define  GPIO_REG_PORT3_FAST_BASE_ADDR                         ((CPU_INT32U)(GPIO_REG_PORTx_FAST_BASE_ADDR + 0x60))
#define  GPIO_REG_PORT4_FAST_BASE_ADDR                         ((CPU_INT32U)(GPIO_REG_PORTx_FAST_BASE_ADDR + 0x80))

#define  GPIO_REG_PINMODE_ODx_BASE_ADDR                        ((CPU_INT32U)GPIO_REG_PINMODE_BASE_ADDR + 0x28)
#define  GPIO_REG_PINMODE_OD0_BASE_ADDR                        ((CPU_INT32U)(GPIO_REG_PINMODE_ODx_BASE_ADDR + 0x00))
#define  GPIO_REG_PINMODE_OD1_BASE_ADDR                        ((CPU_INT32U)(GPIO_REG_PINMODE_ODx_BASE_ADDR + 0x04))
#define  GPIO_REG_PINMODE_OD2_BASE_ADDR                        ((CPU_INT32U)(GPIO_REG_PINMODE_ODx_BASE_ADDR + 0x08))
#define  GPIO_REG_PINMODE_OD3_BASE_ADDR                        ((CPU_INT32U)(GPIO_REG_PINMODE_ODx_BASE_ADDR + 0x0C))
#define  GPIO_REG_PINMODE_OD4_BASE_ADDR                        ((CPU_INT32U)(GPIO_REG_PINMODE_ODx_BASE_ADDR + 0x10))

///* for GPIO DIR */ 
///* 32bit Access */
//#define  FIO0DIR							(*(__IO CPU_INT32U *)(0x2009C000)) 
//#define  FIO1DIR							(*(__IO CPU_INT32U *)(0x2009C020))
//#define  FIO2DIR							(*(__IO CPU_INT32U *)(0x2009C040))
//#define  FIO3DIR							(*(__IO CPU_INT32U *)(0x2009C060))
//#define  FIO4DIR							(*(__IO CPU_INT32U *)(0x2009C080))
///* 8bit Access */																				 
//#define  FIO2DIR0							(*(__IO CPU_INT08U *)(0x2009C040)) 
//
///* for GPIO MASK */
//#define  FIO0MASK							(*(__IO CPU_INT32U *)(0x2009C010))
//#define  FIO1MASK							(*(__IO CPU_INT32U *)(0x2009C030))
//#define  FIO2MASK							(*(__IO CPU_INT32U *)(0x2009C050))
//#define  FIO3MASK							(*(__IO CPU_INT32U *)(0x2009C070))
//#define  FIO4MASK							(*(__IO CPU_INT32U *)(0x2009C090))
//
///* for GPIO value register */
///* 32bit Access */
//#define  FIO0PIN							(*(__IO CPU_INT32U *)(0x2009C014)) 
//#define  FIO1PIN							(*(__IO CPU_INT32U *)(0x2009C034))
//#define  FIO2PIN							(*(__IO CPU_INT32U *)(0x2009C054))
//#define  FIO3PIN							(*(__IO CPU_INT32U *)(0x2009C074))
//#define  FIO4PIN							(*(__IO CPU_INT32U *)(0x2009C094))
///* 8bit Access */
//#define  FIO2PIN0							(*(__IO CPU_INT08U *)(0x2009C054)) 
//
///* for GPIO SET */
//#define  FIO0SET							(*(__IO CPU_INT32U *)(0x2009C018))
//#define  FIO1SET							(*(__IO CPU_INT32U *)(0x2009C038))
//#define  FIO2SET							(*(__IO CPU_INT32U *)(0x2009C058))
//#define  FIO3SET							(*(__IO CPU_INT32U *)(0x2009C078))
//#define  FIO4SET							(*(__IO CPU_INT32U *)(0x2009C098))
//
///* for GPIO CLR */
//#define  FIO0CLR							(*(__IO CPU_INT32U *)(0x2009C01C))
//#define  FIO1CLR							(*(__IO CPU_INT32U *)(0x2009C03C))
//#define  FIO2CLR							(*(__IO CPU_INT32U *)(0x2009C05C))
//#define  FIO3CLR							(*(__IO CPU_INT32U *)(0x2009C07C))
//#define  FIO4CLR							(*(__IO CPU_INT32U *)(0x2009C09C))
//
///* for pin select register */
//#define  PINSEL0							(*(__IO CPU_INT32U *)(0x4002C000))
//#define  PINSEL1							(*(__IO CPU_INT32U *)(0x4002C004))
//#define  PINSEL2							(*(__IO CPU_INT32U *)(0x4002C008))
//#define  PINSEL3							(*(__IO CPU_INT32U *)(0x4002C00c))
//#define  PINSEL4							(*(__IO CPU_INT32U *)(0x4002C010))
//#define  PINSEL5							(*(__IO CPU_INT32U *)(0x4002C014))
//#define  PINSEL6							(*(__IO CPU_INT32U *)(0x4002C018))
//#define  PINSEL7							(*(__IO CPU_INT32U *)(0x4002C01c))
//#define  PINSEL8							(*(__IO CPU_INT32U *)(0x4002C020))
//#define  PINSEL9							(*(__IO CPU_INT32U *)(0x4002C024))
//#define  PINSEL10							(*(__IO CPU_INT32U *)(0x4002C028))


/* for GPIO inttrupt */
#define  REG_IOIntStatus				    (*(__IO CPU_INT32U *)  (0x40028080))

#define  REG_IO0IntEnR				    	(*(__IO CPU_INT32U *)  (0x40028090))
#define  REG_IO2IntEnR                      (*(__IO CPU_INT32U *)  (0x400280B0)) 	 
#define  REG_IO0IntEnF				    	(*(__IO CPU_INT32U *)  (0x40028094))
#define  REG_IO2IntEnF				    	(*(__IO CPU_INT32U *)  (0x400280B4))

#define  REG_IO0IntStatR				    (*(__IO CPU_INT32U *)  (0x40028084))
#define  REG_IO2IntStatR				    (*(__IO CPU_INT32U *)  (0x400280A4))
#define  REG_IO0IntStatF				    (*(__IO CPU_INT32U *)  (0x40028088))
#define  REG_IO2IntStatF				    (*(__IO CPU_INT32U *)  (0x400280A8))

#define  REG_IO0IntClr				    	(*(__IO CPU_INT32U *)  (0x4002808C))
#define  REG_IO2IntClr				    	(*(__IO CPU_INT32U *)  (0x400280AC))


/* GPIO constants */
#define  GPIO_PORT0                                    0
#define  GPIO_PORT1                                    1
#define  GPIO_PORT0_FAST                               2
#define  GPIO_PORT1_FAST                               3
#define  GPIO_PORT2_FAST                               4
#define  GPIO_PORT3_FAST                               5
#define  GPIO_PORT4_FAST                               6


#define  GPIO_OPT_NONE                       DEF_BIT_NONE
#define  GPIO_OPT_OUT_EN                     DEF_BIT_01
#define  GPIO_OPT_IN_EN                      DEF_BIT_02
#define  GPIO_OPT_RD_WR_EN                   DEF_BIT_03
#define  GPIO_OPT_RD_WR_DIS                  DEF_BIT_04

#define  GPIO_OPT_FNCT_1                     DEF_BIT_05
#define  GPIO_OPT_FNCT_2                     DEF_BIT_06
#define  GPIO_OPT_FNCT_3                     DEF_BIT_07
#define  GPIO_OPT_FNCT_4                     DEF_BIT_08

#define  GPIO_OPT_MODE_PULLUP                DEF_BIT_09
#define  GPIO_OPT_MODE_RESERVED              DEF_BIT_10
#define  GPIO_OPT_MODE_NONE                  DEF_BIT_11
#define  GPIO_OPT_MODE_PULLDOWN              DEF_BIT_12
#define  GPIO_OPT_MODE_REPEATER              DEF_BIT_13
#define  GPIO_OPT_MODE_OPEN_DRAIN            DEF_BIT_14

#define  GPIO_OPT_FNCT_ANY                                     (GPIO_OPT_FNCT_1 | \
                                                                    GPIO_OPT_FNCT_2 | \
                                                                    GPIO_OPT_FNCT_3 | \
                                                                    GPIO_OPT_FNCT_4)

#define  GPIO_OPT_MODE_ANY                                     (GPIO_OPT_MODE_PULLUP   | \
                                                                    GPIO_OPT_MODE_NONE     | \
                                                                    GPIO_OPT_MODE_PULLDOWN | \
                                                                    GPIO_OPT_MODE_REPEATER | \
                                                                    GPIO_OPT_MODE_OPEN_DRAIN)

#define  GPIO_OPT_MODE_INVALID                                  0xFF
#define  GPIO_OPT_FNCT_INVALID                                  0xFF

/* for GPIO interrupt set ----------------------------------------------------*/
/* for GPIO interrupt set */
#define  EDGE_STATE_R                        0
#define  EDGE_STATE_F            			 0x01u

/* GPIO Interrupt pin define */
#define  GPIO_INT0_PROT      0
#define  GPIO_INT2_PROT      2u

/* GPIO overrall interruppt Status */
#define  IOINTSTATUS_P0		 DEF_BIT_00
#define  IOINTSTATUS_P2		 DEF_BIT_02

/* */
#define  IO2IntStatR_P

/*  */

/* Function Prototypes -------------------------------------------------------*/
void GPIO_Init(void);

void         GPIO_Cfg         (unsigned char   gpio_port,
                                   unsigned int   gpio_pin,
                                   unsigned short   gpio_opt);
void         GPIO_Clr         (CPU_INT08U   gpio_port,
                                   CPU_INT32U   gpio_pin);
void         GPIO_Set         (CPU_INT08U   gpio_port,
                                   CPU_INT32U   gpio_pin);

void         GPIO_Toggle      (CPU_INT08U   gpio_port,
                                   CPU_INT32U   gpio_pin);

CPU_INT32U   GPIO_StatusGet   (CPU_INT08U   gpio_port);

void         GPIO_IntCmd      (CPU_INT08U gpio_port, 
                               CPU_INT32U gpio_pin, 
							   CPU_INT08U edgeState);

CPU_INT32U   GPIO_GetIntStatus(CPU_INT08U gpio_port, 
                               CPU_INT32U gpio_pin, 
							   CPU_INT08U edgeState);

void         GPIO_ClearInt    (CPU_INT08U gpio_port, 
                               CPU_INT32U gpio_pin);




/*******************  (C) COPYRIGHT 2010 DJI ************END OF FILE***********/    
#endif                                                          /* End of module include.                               */
