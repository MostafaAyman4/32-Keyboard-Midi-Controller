/*
 * REG_.h
 *
 * Created: 06/02/2023 2:05:37 PM
 *  Author: HP
 */ 


#ifndef REG__H_
#define REG__H_

#include "STD_TYPES.h"

/***********************DIO********************************/

/************************A*********************************/
#define PORTA      (*((volatile uint8*)0x3B))
#define DDRA       (*((volatile uint8*)0x3A))
#define PINA       (*((volatile uint8*)0x39))
/************************B*********************************/
#define PORTB      (*((volatile uint8*)0x38))
#define DDRB       (*((volatile uint8*)0x37))
#define PINB       (*((volatile uint8*)0x36))
/************************C*********************************/
#define PORTC      (*((volatile uint8*)0x35))
#define DDRC       (*((volatile uint8*)0x34))
#define PINC       (*((volatile uint8*)0x33))
/************************D*********************************/
#define PORTD      (*((volatile uint8*)0x32))
#define DDRD       (*((volatile uint8*)0x31))
#define PIND       (*((volatile uint8*)0x30)) 

/***********************UART********************************/
#define UCSRA     (*((volatile uint8*)0x2B))
#define UCSRB     (*((volatile uint8*)0x2A))
#define UCSRC     (*((volatile uint8*)0x40))
#define UBRRL     (*((volatile uint8*)0x29))
#define UDR       (*((volatile uint8*)0x2C))

#endif /* REG__H_ */