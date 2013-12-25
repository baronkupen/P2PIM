/*
 * LogLevel.cpp
 *
 *  Created on: Dec 15, 2013
 *      Author: baron
 */

#include "LogLevel.h"
#include "IOutStream.h"
#include "EnumConverter.h"
#include <string>
#include <map>

namespace Core_Loggers {

	std::map<LogLevel, const char*> logLevelString = {
	#define X(a) {LogLevel::a, #a},
	#include "LogLevel.def"
	#undef X
	};

	ENUMTOSTRING(Core_Loggers::LogLevel, Core_Loggers::logLevelString);

	const Core_TypeWrappers::Interfaces::IOutStream& operator<<(const Core_TypeWrappers::Interfaces::IOutStream& os, const LogLevel& obj) {
		std::string convertedEnum = toString(obj);
		os << convertedEnum;
		return os;
	}
}

