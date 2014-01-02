/*
 * ITargetRulesManager.h
 *
 * Created on: Jan 1, 2014
 * 	Author: baron
 *
 */

#ifndef ITARGETRULESMANAGER_H_
#define ITARGETRULESMANAGER_H_

#include "ITargetConfig.h"

namespace Core_Loggers {
	namespace Interfaces {
		class ITargetRulesManager {
			private:
				

			public:
				virtual const ITargetConfig* const CreateTargetConfig() const = 0; 	
				~ITargetRulesManager() {}
		};
	}
}

#endif /* ITARGETRULESMANAGER_H_ */
