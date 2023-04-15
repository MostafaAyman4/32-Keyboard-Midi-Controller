/*
 * PIANO_32KEY_config.h
 *
 * Created: 06/02/2023 3:59:50 PM
 *  Author: HP
 */ 


#ifndef PIANO_32KEY_CONFIG_H_
#define PIANO_32KEY_CONFIG_H_

// Columns are keyboard input signal
// Rows    are keyboard output signal

#define columns_port       PORT_A
#define rows_port          PORT_B


#define columns_pins             0b00001111
#define rows_pins                0b00001111

#define no_of_key_matrix          3
#define key_matrix_mask           0b00001111




#endif /* PIANO_32KEY_CONFIG_H_ */