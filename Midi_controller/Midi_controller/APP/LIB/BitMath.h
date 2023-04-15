/*
 * BitMath.h
 *
 * Created: 06/02/2023 4:43:16 PM
 *  Author: HP
 */ 


#ifndef BITMATH_H_
#define BITMATH_H_

#define SET_BIT(reg,bit)      (reg |= (1<<bit))       
#define CLEAR_BIT(reg,bit)    (reg &= ~(1<<bit))
#define READ_BIT(reg,bit)     ((reg >> bit)&1)


#endif /* BITMATH_H_ */