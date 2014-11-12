/*
 * ITargetConfig.h
 *
 * Created on: Jan 1, 2014
 * 	Author: baron
 *
 */

#ifndef ITARGETCONFIG_H_
#define ITARGETCONFIG_H_

#include "LogLevel.h"
#include <string> 

namespace Core_Loggers {
	namespace Interfaces {
		class ITargetConfig {
			private:
				

			public:	
				virtual void appendConfig(const LogLevel &logLevel, const std::string &name) = 0;
				virtual ~ITargetConfig() {}
		};
	}
}

#endif /* ITARGETCONFIG_H_ */
