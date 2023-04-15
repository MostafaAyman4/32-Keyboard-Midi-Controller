/*
 * UART_PROGRAM.c
 *
 * Created: 07/02/2023 2:36:59 PM
 *  Author: HP
 */ 
#include "UART_HEADER.h"

void MUART_void_initiate(){
	
	//set TX & RX pin as output-input
	MDIO_void_pin_set_direction(PD1,OUTPUT);
	MDIO_void_pin_set_direction(PD0,INPUT);
	
	//set the baud rate
	UBRRL = 8;
	
	//set the data frame
	UCSRC = 0b10000110;
	CLEAR_BIT(UCSRB,2);
	
	//enable the RX,Tx circuits
	SET_BIT(UCSRB,3);   //RX enable
	SET_BIT(UCSRB,4);   //Tx enable
}
void MUART_void_send_Byte(uint8 local_data){
	UDR = local_data;
	while(READ_BIT(UCSRA,5)==0);
}
uint8 MUART_uint8_receive_Byte(){
	while(READ_BIT(UCSRA,7) == 0);
	return UDR;
}
