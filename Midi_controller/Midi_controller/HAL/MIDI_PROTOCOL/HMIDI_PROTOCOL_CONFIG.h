/*
 * HMIDI_PROTOCOL_CONFIG.h
 *
 * Created: 09/02/2023 11:38:28 AM
 *  Author: HP
 */ 


#ifndef HMIDI_PROTOCOL_CONFIG_H_
#define HMIDI_PROTOCOL_CONFIG_H_

#define Piano_keys_start_note						29
#define Asserted_half_command                       0b1001
#define Deasserted_half_command                     0b1000

#define midi_channel_half_command                   0b0000

#define max_velocity_value                          127
#define min_velocity_value                          0

#endif /* HMIDI_PROTOCOL_CONFIG_H_ */