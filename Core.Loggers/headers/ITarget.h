/*
 * ITarget.h
 *
 * Created on: Nov 12, 14
 *	Author: baron
 */

#ifndef ITARGET_H_
#define ITARGET_H_

#include "IOutStream.h"
#include <string>

namespace Core_Loggers {
	namespace Interfaces {
		class ITarget {
			private:

			public:
				virtual std::string getName() const = 0;
				virtual const Core_TypeWrappers::Interfaces::IOutStream* const getStream() const = 0;
				virtual ~ITarget() {}
		};
	}
}

#endif /* ITARGET_H_ */
