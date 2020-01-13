/*
 * tmu.h
 *
 *  Created on: Jan 12, 2020
 *      Author: Ahmed Osama
 */

#ifndef SERVICE_TMU_TMU_H_
#define SERVICE_TMU_TMU_H_

/*- INCLUDES -----------------------------------------------*/
#include "std_types.h"
#include "tmu_cfg.h"
#include "tmu_lcfg.h"
#include "system_ErrorHandling.h"
#include "retval.h"

/*- CONSTANTS ----------------------------------------------*/

/*- PRIMITIVE TYPES ----------------------------------------*/
/* typedef for callback function */
typedef void (*gptrFun_User_CBK) (void);

/*- ENUMS --------------------------------------------------*/

/*- STRUCTS AND UNIONS -------------------------------------*/

/*- FUNCTION-LIKE MACROS -----------------------------------*/

/*- FUNCTION DECLARATIONS ----------------------------------*/

/**
* @brief: TMU Initialization
* @param:
* Input : void
* Output: None
* @return: sint8 status code with error code if one occurred
*/
sint8 TMU_Init(void);

/**
* @brief: TMU DeInitialization
* @param:
* Input : void
* Output: None
* @return: sint8 status code with error code if one occurred
*/
sint8 TMU_DeInit(void);

/**
* @brief: TMU Start
* @param:
* Input : void
* Output: None
* @return: sint8 status code with error code if one occurred
*/
sint8 TMU_Start(void);

/**
* @brief: TMU Stop
* @param:
* Input : void
* Output: None
* @return: sint8 status code with error code if one occurred
*/
sint8 TMU_Stop(void);

/**
* @brief: TMU Loops through task list and service each one as requested
* @param:
* Input : void
* Output: None
* @return: sint8 status code with error code if one occurred
*/
sint8 TMU_Dispatch(void);

#endif /* SERVICE_TMU_TMU_H_ */
