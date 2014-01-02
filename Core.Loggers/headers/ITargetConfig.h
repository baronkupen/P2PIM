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
#include "ITargetName.h"

namespace Core_Loggers {
	namespace Interfaces {
		class ITargetConfig {
			private:
				

			public:	
				virtual bool appendConfig(const LogLevel, const ITargetName) = 0;
		};
	}
}

#endif /* ITARGETCONFIG_H_ */
