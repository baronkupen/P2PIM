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

namespace Core_Loggers {
	namespace Interfaces {
		class IOutStream {
			private:

			public:
			virtual IOutStream& operator<<(const char* message) = 0;
			virtual IOutStream& operator<<(const std::string &message) = 0;
			virtual IOutStream& operator<<(std::ostream& (*func)(std::ostream&)) = 0;
			virtual ~IOutStream() {}
		};
	}
}

#endif /* IOUTSTREAM_H_ */
