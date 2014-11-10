/*
 * INamedTargets.h
 *
 * Created on: Dec 23, 2013
 * 	Author: baron
 *
 */

#ifndef INAMEDTARGETS_H_
#define INAMEDTARGETS_H_

#include "ITarget.h"
#include "ITargetName.h" 

namespace Core_Loggers {
	namespace Interfaces {
		class INamedTargets {
			private:
				
			public:
				virtual bool add(const ITargetName &targetName, const ITarget &target) = 0;
				virtual ~INamedTargets() {} 
		};
	}
}

#endif /* INAMEDTARGETS_H_ */
