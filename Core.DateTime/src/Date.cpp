/*
 * Date.cpp
 *
 *  Created on: Dec 15, 2013
 *      Author: baron
 */

#include "Date.h"
#include <ctime>

namespace Core_DateTime {
	time_t Date::now() const{
		return time(0);
	}
}


