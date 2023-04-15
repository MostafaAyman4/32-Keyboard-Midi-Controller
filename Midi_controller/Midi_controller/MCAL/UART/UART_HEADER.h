/*
 * UART_HEADER.h
 *
 * Created: 07/02/2023 2:37:18 PM
 *  Author: HP
 */ 


#ifndef UART_HEADER_H_
#define UART_HEADER_H_

#include "UART_CONFIG.h"

#include "STD_TYPES.h"
#include "BitMath.h"
#include "GLOBAL_CONFIG.h"
#include "REG_.h"
#include "DIO_Header.h"

void MUART_void_initiate();
void MUART_void_send_Byte(uint8 local_data);
uint8 MUART_uint8_receive_Byte();




#endif /* UART_HEADER_H_ */