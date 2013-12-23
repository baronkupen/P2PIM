/*
 * ILogConfig.h
 *
 * Created on: Dec 23, 2013
 * 	Author: baron
 *
 */

#ifndef ILOGCONFIG_H_
#define ILOGCONFIG_H_

#include "ITarget.h"
#include <string>

namespace Core_Loggers {
	namespace Interfaces {
		class ILogConfig {
			private:
				
			public:
				virtual bool addTarget(const std::string targetName, const Interfaces::ITarget &target) = 0;
				virtual ~ILogConfig() {} 
		};
	}
}

#endif /* ILOGCONFIG_H_ */
