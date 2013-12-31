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
	const Core_TypeWrappers::Interfaces::IOutStream* const ConsoleTarget::grabOutStream() const {
		const Core_TypeWrappers::Interfaces::IOutStream* const output = new Core_TypeWrappers::OutStream(outstream);

		return output;
	}
	
	ConsoleTarget::ConsoleTarget(std::ostream &outstream) : outstream(outstream) {}
}

