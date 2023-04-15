/*
 * PIANO_32KEY_program.c
 *
 * Created: 06/02/2023 3:58:50 PM
 *  Author: HP
 */ 

#include "PIANO_32KEY_header.h"

uint32 piano_32keys_flag= 0x0000;

void  HPIANO_32KEY_void_initiate(){
	MDIO_VOID_PORT_SET_DIRECTION(columns_port,columns_pins,OUTPUT);
	MDIO_VOID_PORT_SET_DIRECTION(rows_port,rows_pins,INPUT);
	MDIO_VOID_PORT_SET_DATA(rows_port,rows_pins,PULLUP);
}
uint32 HPIANO_32KEY_uint64_transscan(){
	uint32 keys32_reading_value=0x00000000;
	uint8 partial_scan_read;
	MDIO_void_pin_set_data(PA0,HIGH);
	MDIO_void_pin_set_data(PA1,HIGH);
	MDIO_void_pin_set_data(PA2,HIGH);
	MDIO_void_pin_set_data(PA3,HIGH);
	for(uint8 i=0;i<=no_of_key_matrix;i++){
		MDIO_void_pin_set_data(i+((columns_port+1)*10),LOW);
		uint8 dum=~(MDIO_uint8_PORT_READ_DATA(rows_port));
	    partial_scan_read=dum & key_matrix_mask;  
		keys32_reading_value = (keys32_reading_value<<(no_of_key_matrix+1)) | partial_scan_read;
		MDIO_void_pin_set_data(i+((columns_port+1)*10),HIGH);
	}
	return keys32_reading_value;
}

void HPIANO_32KEY_uint32_GET_ASSERTED_DEASSERTED_KEY(uint32 *local_asserted_data,uint32 *local_deasserted_data){
	uint32 Reading_keys=HPIANO_32KEY_uint64_transscan();
	for(uint8 i=0;i<=31;i++){
		if(READ_BIT(Reading_keys,i)^READ_BIT(piano_32keys_flag,i)){
			
			if(READ_BIT(Reading_keys,i)==1){
				//Asserted_code_send
				SET_BIT(*local_asserted_data,i);
			}
			else{
				//deasserted code
				SET_BIT(*local_deasserted_data,i);
			}
		}
		else{
		}
	}
	piano_32keys_flag =Reading_keys;
}


