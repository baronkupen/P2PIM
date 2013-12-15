/*
 * TimePeriodConverter.cpp
 *
 *  Created on: Dec 15, 2013
 *      Author: baron
 */

#include "TimePeriodConverter.h"
#include "StdTimePeriod.h"
#include <string>

namespace Core_DateTime {
	std::string TimePeriodConverter::convertStdTimePeriod(const StdTimePeriod &period) const {
		if (period == StdTimePeriod::AM) {
			return AM_STRING;
		}

		return PM_STRING;
	}
}


