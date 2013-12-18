/*
 * LogLevel.h
 *
 *  Created on: Dec 15, 2013
 *      Author: baron
 */

#ifndef LOGLEVEL_H_
#define LOGLEVEL_H_

#include "IOutStream.h"
#include "EnumConverter.h"
#include <map>

namespace Core_Loggers {

	enum class LogLevel {
#define X(a) a,
#include "LogLevel.def"
#undef X
	};

	Core_TypeWrappers::Interfaces::IOutStream& operator<<(Core_TypeWrappers::Interfaces::IOutStream& os, const LogLevel& obj);

	ENUMTOSTRING_DECL(Core_Loggers::LogLevel);
}

#endif /* LOGLEVEL_H_ */
