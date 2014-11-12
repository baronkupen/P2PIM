/*
 * ILogManager.h
 *
 *  Created on: Dec 15, 2013
 *      Author: baron
 */

#ifndef ILOGMANAGER_H_
#define ILOGMANAGER_H_

#include "ILogger.h"
#include "LogLevel.h"

namespace Core_Loggers {
	namespace Interfaces {
		class ILogManager : public ILogger {
			private:

			public:
			     virtual void add(const LogLevel &logLevel, const ILogger &logger) = 0;
				virtual ~ILogManager() {}
		};
	}
}

#endif /* ILOGMANAGER_H_ */
