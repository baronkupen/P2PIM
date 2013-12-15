/*
 * StdTimeConverter.cpp
 *
 *  Created on: Dec 15, 2013
 *      Author: baron
 */

#include "StdTimeConverter.h"
#include "StdTime.h"

namespace Core_DateTime {
	StdTime StdTimeConverter::convertToStdTime(const tm *localTime) const {
		int hour24 = localTime->tm_hour;
		int minute = localTime->tm_min;
		int second = localTime->tm_sec;

		StdTimePeriod timePeriod = StdTimePeriod::AM;

		int hour = hour24;
		if (hour24 > StdBaseHour) {
			hour = hour24 - StdBaseHour;
			timePeriod = StdTimePeriod::PM;
		}

		StdTime stdTime;
		stdTime.hour = hour;
		stdTime.minute = minute;
		stdTime.second = second;
		stdTime.period = timePeriod;

		return stdTime;
	}
}


