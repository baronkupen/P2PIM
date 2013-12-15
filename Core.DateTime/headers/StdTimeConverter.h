/*
 * StdTimeConverter.h
 *
 *  Created on: Dec 15, 2013
 *      Author: baron
 */

#ifndef STDTIMECONVERTER_H_
#define STDTIMECONVERTER_H_

#include <ctime>
#include "StdTime.h"

namespace Core_DateTime {
	class StdTimeConverter {
		private:
		const int StdBaseHour = 12;

		public:
		StdTime convertToStdTime(const tm *localTime) const;
	};
}

#endif /* STDTIMECONVERTER_H_ */
