/*
 * HMIDI_PROTOCOL_HEADER.h
 *
 * Created: 09/02/2023 11:38:10 AM
 *  Author: HP
 */ 


#ifndef HMIDI_PROTOCOL_HEADER_H_
#define HMIDI_PROTOCOL_HEADER_H_

#include "HMIDI_PROTOCOL_CONFIG.h"
#include "BitMath.h"
#include "STD_TYPES.h"
#include "GLOBAL_CONFIG.h"

#include "UART_HEADER.h"

void HMIDI_void_initiate();
uint8 HMIDI_GET_NOTE_VALUE(uint32 local_KEY_DATA_WORD);
void HMIDI_void_asserted_send_command(uint32 local_asserted_data,uint8 local_velocity);
void HMIDI_void_deasserted_send_command(uint32 local_deasserted_data,uint8 local_velocity);

#endif /* HMIDI_PROTOCOL_HEADER_H_ */