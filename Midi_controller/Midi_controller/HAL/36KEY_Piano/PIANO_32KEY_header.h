/*
 * PIANO_32KEY_header.h
 *
 * Created: 06/02/2023 3:59:09 PM
 *  Author: HP
 */ 


#ifndef PIANO_32KEY_HEADER_H_
#define PIANO_32KEY_HEADER_H_

#include "REG_.h"
#include "PIANO_32KEY_config.h"
#include "GLOBAL_CONFIG.h"
#include "STD_TYPES.h"

#include "DIO_Header.h"

void  HPIANO_32KEY_void_initiate();
void HPIANO_32KEY_uint32_GET_ASSERTED_DEASSERTED_KEY(uint32 *local_asserted_data,uint32 *local_deasserted_data);
uint32 HPIANO_32KEY_uint64_transscan();



#endif /* PIANO_32KEY_HEADER_H_ */