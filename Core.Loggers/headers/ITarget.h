/*
 * ITarget.h
 *
 * Created on: Dec 23, 2013
 * 	Author: baron
 *
 */

#ifndef ITARGET_H_
#define ITARGET_H_

#include "IOutStream.h"

namespace Core_Loggers {
	namespace Interfaces {
		class ITarget {
			private:

			public:
				virtual const Core_TypeWrappers::Interfaces::IOutStream* const grabOutStream() const = 0;
				virtual ~ITarget() {}
		};
	}
}

#endif /* ITARGET_H_ */
