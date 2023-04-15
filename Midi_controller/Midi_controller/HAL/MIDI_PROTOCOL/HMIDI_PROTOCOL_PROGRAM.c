/*
 * HMIDI_PROTOCOL_PROGRAM.c
 *
 * Created: 09/02/2023 11:37:55 AM
 *  Author: HP
 */ 
#include "HMIDI_PROTOCOL_HEADER.h"

void HMIDI_void_initiate(){
	MUART_void_initiate();
}
uint8 HMIDI_GET_NOTE_VALUE(uint32 local_KEY_DATA_WORD){
	uint8 key_data_array[32];
	for (uint8 i=0;i<=31;i++)
	{
		if(READ_BIT(local_KEY_DATA_WORD,i)==1){
			key_data_array[i]=1;
		}
	}
	return key_data_array;
}
void HMIDI_void_asserted_send_command(uint32 local_asserted_data,uint8 local_velocity){
	//check if it in the range
	if(local_velocity<=max_velocity_value && local_velocity >= min_velocity_value){
		uint8 status_command=(Asserted_half_command<<4)| midi_channel_half_command; 
		MUART_void_send_Byte(status_command);
		/*
					send note code
		*/
		MUART_void_send_Byte(local_velocity);
	}
}
void HMIDI_void_deasserted_send_command(uint32 local_deasserted_data,uint8 local_velocity){
	if(local_velocity<=max_velocity_value && local_velocity >= min_velocity_value){
		uint8 status_command=(Deasserted_half_command<<4)| midi_channel_half_command; 
		MUART_void_send_Byte(status_command);
		/*
					send note code
		*/
		MUART_void_send_Byte(local_velocity);
	}
}
