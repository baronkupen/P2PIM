/*
 * ILevelLoggers.h
 *
 * Created on: Dec 19, 2013
 * 	Author: baron
 */

#ifndef ILEVELLOGGERS_H_
#define ILEVELLOGGERS_H_

#include "LogLevel.h"
#include "ILogger.h"

namespace Core_Loggers {
	namespace Interfaces {
		class ILevelLoggers {
			private:

			public:
				virtual const ILogger& getLevelLogger(const LogLevel &logLevel) const = 0;
				virtual bool addLevelLogger(const LogLevel &logLevel, const ILogger &logger) = 0;
				~ILevelLoggers() {}
		};
	}
}

#endif /* ILEVELLOGGERS_H_ */
