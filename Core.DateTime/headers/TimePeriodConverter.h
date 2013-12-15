/*
 * TimePeriodConverter.h
 *
 *  Created on: Dec 15, 2013
 *      Author: baron
 */

#ifndef TIMEPERIODCONVERTER_H_
#define TIMEPERIODCONVERTER_H_

#include <string>
#include "StdTimePeriod.h"

namespace Core_DateTime {
	class TimePeriodConverter {
		private:
		const std::string AM_STRING = "AM";
		const std::string PM_STRING = "PM";

		public:
		std::string convertStdTimePeriod(const StdTimePeriod &period) const;
	};
}

#endif /* TIMEPERIODCONVERTER_H_ */
