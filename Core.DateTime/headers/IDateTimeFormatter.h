/*
 * IDateTimeFormatter.h
 *
 *  Created on: Dec 15, 2013
 *      Author: baron
 */

#ifndef IDATETIMEFORMATTER_H_
#define IDATETIMEFORMATTER_H_

#include <string>
#include <ctime>
#include "StdTime.h"

namespace Core_DateTime {
	namespace Interfaces {
		class IDateTimeFormatter {
			private:

			public:
				virtual std::string toLongTime(const time_t &time) const = 0;
				virtual std::string toLongDate(const time_t &time) const = 0;
				virtual std::string toShortTime(const time_t &time) const = 0;
				virtual std::string toShortDate(const time_t &time) const = 0;
				virtual std::string toLongTime(const StdTime &time) const = 0;
				virtual std::string toShortTime(const StdTime &time) const = 0;
				virtual ~IDateTimeFormatter() {};
		};
	}
}

#endif /* IDATETIMEFORMATTER_H_ */
