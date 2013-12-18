/*
 * StdTimePeriod.cpp
 *
 * Created on: Dec 17, 2013
 * 	Author: baron
 */

#include "StdTimePeriod.h"
#include "IOutStream.h"
#include "EnumConverter.h"
#include <string>
#include <map>

namespace Core_DateTime {
	
	std::map<StdTimePeriod, const char*> timePeriodString = {
#define X(a) {StdTimePeriod::a, #a},
#include "StdTimePeriod.def"
#undef X
	};

	ENUMTOSTRING(Core_DateTime::StdTimePeriod, Core_DateTime::timePeriodString);

	Core_TypeWrappers::Interfaces::IOutStream& operator<<(Core_TypeWrappers::Interfaces::IOutStream& os, const StdTimePeriod& obj) {
		std::string convertedEnum = toString(obj);
		os << convertedEnum;
		return os;
	}
}
