/*
 * DIO_program.c
 *
 * Created: 06/02/2023 2:18:05 PM
 *  Author: HP
 */ 

#include "DIO_Header.h"
void MDIO_void_pin_set_direction(uint8 local_pin,uint8 local_value){
	uint8 port= local_pin/10;
	
	switch (local_value)
	{
		case OUTPUT:
		switch (port)
		{
			case A:
			local_pin =local_pin %10;
			SET_BIT(DIRECTION_REGISTER_A,local_pin);
			break;
			case B:
			local_pin =local_pin %20;
			SET_BIT(DIRECTION_REGISTER_B,local_pin);
			break;
			case C:
			local_pin =local_pin %30;
			SET_BIT(DIRECTION_REGISTER_C,local_pin);
			break;
			case D:
			local_pin =local_pin %40;
			SET_BIT(DIRECTION_REGISTER_D,local_pin);
			break;
		}
		break;
		case INPUT:
		switch (port)
		{
			case A:
			local_pin =local_pin %10;
			CLEAR_BIT(DIRECTION_REGISTER_A,local_pin);
			break;
			case B:
			local_pin =local_pin %20;
			CLEAR_BIT(DIRECTION_REGISTER_B,local_pin);
			break;
			case C:
			local_pin =local_pin %30;
			CLEAR_BIT(DIRECTION_REGISTER_C,local_pin);
			break;
			case D:
			local_pin =local_pin %40;
			CLEAR_BIT(DIRECTION_REGISTER_D,local_pin);
			break;
		}
		break;
	}
}
void MDIO_void_pin_set_data(uint8 local_pin,uint8 local_value){
	uint8 port= local_pin/10;
	
	switch (local_value)
	{
	case HIGH:
		switch (port)
		{
			case A:
			local_pin =local_pin %10;
			SET_BIT(WRITE_DATA_REGISTER_A,local_pin);
			break;
			case B:
			local_pin =local_pin %20;
			SET_BIT(WRITE_DATA_REGISTER_B,local_pin);
			break;
			case C:
			local_pin =local_pin %30;
			SET_BIT(WRITE_DATA_REGISTER_C,local_pin);
			break;
			case D:
			local_pin =local_pin %40;
			SET_BIT(WRITE_DATA_REGISTER_D,local_pin);
			break;
		}
		break;
	case LOW:
	switch (port)
	{
		case A:
		local_pin =local_pin %10;
		CLEAR_BIT(WRITE_DATA_REGISTER_A,local_pin);
		break;
		case B:
		local_pin =local_pin %20;
		CLEAR_BIT(WRITE_DATA_REGISTER_B,local_pin);
		break;
		case C:
		local_pin =local_pin %30;
		CLEAR_BIT(WRITE_DATA_REGISTER_C,local_pin);
		break;
		case D:
		local_pin =local_pin %40;
		CLEAR_BIT(WRITE_DATA_REGISTER_D,local_pin);
		break;
	}
	    break;
	}
}
void MDIO_VOID_PORT_SET_DIRECTION(uint8 local_port,uint8 local_pins,uint8 local_dir){
	switch (local_dir)
	{
	case OUTPUT:
		switch (local_port)
		{
			
			case PORT_A:
			DDRA |=local_pins;
			break;
			case PORT_B:
			DDRB |=local_pins;
			break;
			case PORT_C:
			DDRC |=local_pins;
			break;
			case PORT_D:
			DDRD |=local_pins;
			break;
		}
		break;
	case INPUT:
		switch (local_port)
		{
			
			case PORT_A:
			DDRA &= ~(local_pins);
			break;
			case PORT_B:
			DDRB &= ~(local_pins);
			break;
			case PORT_C:
			DDRC &= ~(local_pins);
			break;
			case PORT_D:
			DDRD &= ~(local_pins);
			break;
			
		}
		break;
	}
	
}
void MDIO_VOID_PORT_SET_DATA(uint8 local_port,uint8 local_pins,uint8 local_data){
	
	switch (local_data)
	{
	case HIGH:
		switch (local_port)
		{
			
			case PORT_A:
			PORTA |=local_pins;
			break;
			case PORT_B:
			PORTB |=local_pins;
			break;
			case PORT_C:
			PORTC |=local_pins;
			break;
			case PORT_D:
			PORTD |=local_pins;
			break;
			
		}
		break;
	case LOW:
		switch (local_port)
		{
			
			case PORT_A:
			PORTA &= ~(local_pins);
			break;
			case PORT_B:
			PORTB &= ~(local_pins);
			break;
			case PORT_C:
			PORTC &= ~(local_pins);
			break;
			case PORT_D:
			PORTD &= ~(local_pins);
			break;
			
		}
	break;
	}
	
}
uint8 MDIO_uint8_PORT_READ_DATA(uint8 local_port){
	switch (local_port)
	{
		
		case PORT_A:
		return PINA;
		break;
		case PORT_B:
		return PINB;
		break;
		case PORT_C:
		return PINC;
		break;
		case PORT_D:
		return PIND;
		break;
		
	}
}