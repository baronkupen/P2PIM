/*
 * ConsoleTarget.cpp
 *
 * Created on: Dec 23, 2013
 * 	Author: baron
 *
 */

#include "ConsoleTarget.h"
#include "IOutStream.h"
#include "OutStream.h"
#include <ostream>

namespace Core_Loggers {
	Core_TypeWrappers::Interfaces::IOutStream ConsoleTarget::grabOutStream() const {
		auto output = Core_TypeWrappers::OutStream(outstream);

		return output;
	}
	
	ConsoleTarget::ConsoleTarget(std::ostream &outstream) : outstream(outstream) {}
}

