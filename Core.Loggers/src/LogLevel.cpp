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

namespace Core_Loggers {

	std::map<int, char*> logLevelString = {
	#define X(a) {a, #a},
	#include "LogLevel.def"
	#undef X
	};

	ENUMTOSTRING(Core_Loggers::LogLevel, Core_Loggers::logLevelString);

	Interfaces::IOutStream& operator<<(Interfaces::IOutStream& os, const LogLevel& obj) {
		std::string convertedEnum = enumToString(obj);
		os << convertedEnum;
		return os;
	}
}

