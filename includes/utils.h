/*
 * utils.h
 *
 *  Created on: Sep 16, 2019
 *      Author: phant
 */

#ifndef UTILS_H_
#define UTILS_H_

#include "../includes/constants.h"

namespace KP{
	//attempt to open file 'filename' and read in all data
	//returns SUCCESS if all goes well or COULD_NOT_OPEN_FILE
	int loadData(const char* filename);

	//attempt to create or open file 'filename' to write all data to
	//returns SUCCESS if all goes well or COULD_NOT_OPEN_FILE
	int saveData(const char* filename);

	//sorts data based on mySortOrder (thats what void means)
	void sortData(SORT_ORDER mySortOrder);
}


#endif /* UTILS_H_ */
