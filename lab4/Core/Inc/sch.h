/*
 * sch.h
 *
 *  Created on: Nov 22, 2022
 *      Author: ntdat
 */

#ifndef INC_SCH_H_
#define INC_SCH_H_

typedef struct {
void ( * pTask ) ( void ) ;
uint32_t Delay ;
uint32_t Period ;
uint8_t RunMe ;
uint32_t TaskID ;
} sTask ;

extern int current_index_task;
extern char str[50];
void SCH_Update ( void );
unsigned char SCH_Add_Task ( void ( * pFunction ) ( ) , unsigned int DELAY,unsigned int PERIOD);
void SCH_Dispatch_Tasks ( void );
void SCH_Delete_Task ( const uint32_t TASK_INDEX);

#endif /* INC_SCH_H_ */
