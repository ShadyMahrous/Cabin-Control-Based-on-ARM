/*
 * APP_BIT_MATH.h
 *
 *  Created on: May 13, 2022
 *      Author: Eng- Mohamed Mokhtar
 */

#ifndef INC_APP_UTILITY_APP_BIT_MATH_H_
#define INC_APP_UTILITY_APP_BIT_MATH_H_

/*******************BIT_MANIPULATION***********************************/
#define SET_BIT(REG,BIT_INDEX)      		(REG |=  (1 << BIT_INDEX))	// Setting Bit to logical 1
#define CLR_BIT(REG,BIT_INDEX)      		(REG &= ~(1 << BIT_INDEX))	// Clearing Bit to logical 0
#define TOG_BIT(REG,BIT_INDEX)      		(REG ^=  (1 << BIT_INDEX))	// Inverting the state of Bit
#define GET_BIT(REG,BIT_INDEX)      		(1 & (REG >> BIT_INDEX))	// Determining the value of Bit
#define ASSIGN_BIT_TO(BIT_ACCESS,VALUE)		(BIT_ACCESS) = (VALUE)

#define GIVE_BIT(REG,BIT_INDEX,VALUE)	    (REG |=  (VALUE << BIT_INDEX))
/*******************BYTE_MANIPULATION**********************************/
#define SET_REG(REG)				(REG  = 0xFFFFFFFF)		// Setting a whole 1 byte register
#define CLR_REG(REG)				(REG  = 0x00000000)		// Clearing a whole 1 byte register
#define TOG_REG(REG)				(REG ^= 0xFFFFFFFF)		// Inverting a whole 1 byte register
#define	GET_REG(REG)				(REG)
#define GIVE_REG(REG,VALUE)	        (REG)=(VALUE)
/*--------------------------------------------------------------------*/
#define SET_LNP(REG)				(REG |= 0x0F)		// Setting Low nibble of 1 byte register
#define CLR_LNP(REG)				(REG &= 0xF0)		// Clearing Low nibble of 1 byte register
#define TOG_LNP(REG)				(REG ^= 0x0F)		// Inverting Low nibble of 1 byte register
#define SET_HNP(REG)				(REG |= 0xF0)		// Setting High nibble of 1 byte register
#define CLR_HNP(REG)				(REG &= 0x0F)		// Clearing High nibble of 1 byte register
#define TOG_HNP(REG)				(REG ^= 0xF0)		// Inverting High nibble of 1 byte register

#endif /* INC_APP_UTILITY_APP_BIT_MATH_H_ */
