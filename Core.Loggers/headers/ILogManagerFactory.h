/*
 * ILogManagerFactory.h
 *
 * Created on: Dec 23, 2013
 * 	Author: baron
 */

#ifndef ILOGMANAGERFACTORY_H_
#define ILOGMANAGERFACTORY_H_

#include "ILogManager.h"
#include "ILogConfig.h"

namespace Core_Loggers {
	namespace Interfaces {
		class ILogManagerFactory {
			private:

			public:
				virtual const ILogManager* const CreateLogManager(const ILogConfig &config) const = 0;
				virtual ~ILogManagerFactory() {}
		};
	}
}

#endif /* ILOGMANAGERFACTORY_H_ */
