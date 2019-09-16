/*
 * constants.h
 *
 *  Created on: Sep 16, 2019
 *      Author: phant
 */

#ifndef CONSTANTS_H_
#define CONSTANTS_H_

const char* const 	SOURCE_FILE = "testdata.txt";
const char*	const	RESULTS_FILE = "results.txt";
//default return types
const int 			SUCCESS			 				=  0;
const int 			FAIL							=  SUCCESS - 1;
const int 			COULD_NOT_OPEN_FILE				=  SUCCESS - 2;
const int			UNIMPLEMENTED					=  SUCCESS - 3;

enum SORT_ORDER { CPU_TIME, PROCESS_NUMBER, START_TIME };


#endif /* CONSTANTS_H_ */
