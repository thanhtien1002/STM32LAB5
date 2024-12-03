/*
 * fsm_automatic.h
 *
 *  Created on: Dec 3, 2024
 *      Author: ASUS
 */

#ifndef INC_FSM_AUTOMATIC_H_
#define INC_FSM_AUTOMATIC_H_

#include "main.h"
#include "software_timer.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define INIT 0

#define READING 1

#define STOP 2

#define RST 11

#define OK 12

#define MAX_CMD_SIZE 3

#define MAX_BUFFER_SIZE 30

extern uint8_t buffer_byte;
extern uint8_t buffer[MAX_BUFFER_SIZE];
extern uint8_t index_buffer;
extern uint8_t buffer_flag;

void cmd_parser_fsm();

void uart_comms_fsm();


#endif /* INC_FSM_AUTOMATIC_H_ */
