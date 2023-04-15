/*
 * DIO_Header.h
 *
 * Created: 06/02/2023 2:18:24 PM
 *  Author: HP
 */ 


#ifndef DIO_HEADER_H_
#define DIO_HEADER_H_

#include "DIO_config.h"
#include "GLOBAL_CONFIG.h"
#include "STD_TYPES.h"
#include "REG_.h"
#include "BitMath.h"

/***************** PORTS MACROS *****************/
#define PORT_A   0
#define PORT_B   1
#define PORT_C   2
#define PORT_D   3

#define A        1
#define B        2
#define C        3
#define D        4

/***************** PORTA MACROS *****************/
#define PA0      10
#define PA1      11
#define PA2      12
#define PA3      13
#define PA4      14
#define PA5      15
#define PA6      16
#define PA7      17
/***************** PORTB MACROS *****************/
#define PB0      20
#define PB1      21
#define PB2      22
#define PB3      23
#define PB4      24
#define PB5      25
#define PB6      26
#define PB7      27
/***************** PORTC MACROS *****************/
#define PC0      30
#define PC1      31
#define PC2      32
#define PC3      33
#define PC4      34
#define PC5      35
#define PC6      36
#define PC7      37
/***************** PORTD MACROS *****************/
#define PD0      40
#define PD1      41
#define PD2      42
#define PD3      43
#define PD4      44
#define PD5      45
#define PD6      46
#define PD7      47

void MDIO_void_pin_set_data(uint8 local_pin,uint8 local_value);
void MDIO_void_pin_set_direction(uint8 local_pin,uint8 local_value);

void MDIO_VOID_PORT_SET_DIRECTION(uint8 local_port,uint8 local_pins,uint8 local_dir);
void MDIO_VOID_PORT_SET_DATA(uint8 local_port,uint8 local_pins,uint8 local_data);
uint8 MDIO_uint8_PORT_READ_DATA(uint8 local_port);




#endif /* DIO_HEADER_H_ */