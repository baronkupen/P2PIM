/*
 * IOutStream.h
 *
 *  Created on: Dec 15, 2013
 *      Author: baron
 */

#ifndef IOUTSTREAM_H_
#define IOUTSTREAM_H_

#include "EnumConverter.h"
#include <string>
#include <ostream>

namespace Core_TypeWrappers {
	namespace Interfaces {
		class IOutStream {
			private:

			public:
				virtual const IOutStream& operator<<(const char* message) const = 0;
				virtual const IOutStream& operator<<(const std::string &message) const = 0;
				virtual const IOutStream& operator<<(std::ostream& (*func)(std::ostream&)) const = 0;
				virtual ~IOutStream() {}
		};
	}
}

#endif /* IOUTSTREAM_H_ */
