/*
 * ILogger.h
 *
 *  Created on: Dec 15, 2013
 *      Author: baron
 */

#ifndef ILOGGER_H_
#define ILOGGER_H_

#include "LogLevel.h"
#include <String>

namespace Core_Loggers {
	namespace Interfaces {
		class ILogger {
			private:

			public:
			virtual void log(const std::string &message, const LogLevel &logLevel) = 0;
			virtual ~ILogger() {}
		};
	}
}

#endif /* ILOGGER_H_ */
