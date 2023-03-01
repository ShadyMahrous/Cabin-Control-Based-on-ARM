/*
 * MCAL_RCC_Config.h
 *
 *  Created on: May 13, 2022
 *      Author: Eng- Mohamed Mokhtar
 */

#ifndef INC_MCAL_RCC_MCAL_RCC_CONFIG_H_
#define INC_MCAL_RCC_MCAL_RCC_CONFIG_H_

/*- CLKSRC option :	 1) HSI            2) HSE           3) PLL                  */
#define CLOCK_SOURCE	HSI

/*- HSE option :     1) _HSE_CRYSTAL   2) _HSE_RC                               */
#define HSE_SOURCE  _HSE_CRYSTAL

/*- PLL option :     1) _HSE_PLL       2) _HSI_PLL                              */
#define PLL_SOURCE   _HSI_PLL

#endif /* INC_MCAL_RCC_MCAL_RCC_CONFIG_H_ */
