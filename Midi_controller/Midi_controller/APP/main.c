/*
 * Midi_controller.c
 *
 * Created: 06/02/2023 1:54:28 PM
 * Author : HP
 */ 

#include "DIO_Header.h"
#include "UART_HEADER.h"
#include "PIANO_32KEY_header.h"
#include "HMIDI_PROTOCOL_HEADER.h"
#define  F_CPU 16000000UL
#include "util/delay.h"



int main(void)
{/*
    MDIO_VOID_PORT_SET_DIRECTION(PORT_C,0b10000100,OUTPUT);
	MDIO_VOID_PORT_SET_DIRECTION(PORT_D,0b00001000,OUTPUT);
	
    while (1) 
    {
		MDIO_VOID_PORT_SET_DATA(PORT_C,0b10000100,HIGH);
		MDIO_void_pin_set_data(PD3,HIGH);
		_delay_ms(1000);
		MDIO_VOID_PORT_SET_DATA(PORT_C,0b10000100,LOW);
		MDIO_void_pin_set_data(PD3,LOW);
		_delay_ms(1000);
		
    }*/
	MUART_void_initiate();
	HPIANO_32KEY_void_initiate();
	while (1)
	{
		uint32 asser=0x00000000;
		uint32 deasser=0x00000000;
		HPIANO_32KEY_uint32_GET_ASSERTED_DEASSERTED_KEY(&asser,&deasser);
		MUART_void_send_Byte(asser);
		_delay_ms(500);
	
	}
	
}
