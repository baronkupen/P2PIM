/*
 * StdTime.h
 *
 *  Created on: Dec 15, 2013
 *      Author: baron
 */

#ifndef STDTIME_H_
#define STDTIME_H_

#include "StdTimePeriod.h"

namespace Core_DateTime {
	struct StdTime {
		int hour;
		int minute;
		int second;
		StdTimePeriod period;
	};
}

#endif /* STDTIME_H_ */
