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
#include <vector>
#include <functional>

namespace Core_Loggers {
	namespace Interfaces {
		class ILevelLoggers {
			private:

			public:
				virtual const std::vector<std::reference_wrapper<const ILogger>>& getLoggers(const LogLevel &logLevel) const = 0;
				virtual void add(const LogLevel &logLevel, const ILogger &logger) = 0;
				virtual ~ILevelLoggers() {}
		};
	}
}

#endif /* ILEVELLOGGERS_H_ */
