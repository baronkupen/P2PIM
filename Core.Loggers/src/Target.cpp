/* 
 * Target.cpp
 *
 * Created on: Nov 12, 2014
 *	Author: baron
 */

#include "Target.h"
#include "IOutStream.h"
#include <string>

namespace Core_Loggers {
	Target::Target(const std::string &name, const Core_TypeWrappers::Interfaces::IOutStream* const outStream) : name(name), outStream(outStream) {}

	Target::~Target() {}

	std::string Target::getName() const {
		return name;
	}

	const Core_TypeWrappers::Interfaces::IOutStream* const Target::getStream() const {
		return outStream;
	}
}
