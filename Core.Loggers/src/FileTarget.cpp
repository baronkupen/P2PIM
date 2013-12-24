/*
 * FileTarget.cpp
 *
 * Created on: Dec 23, 2013
 * 	Author: baron
 *
 */

#include "FileTarget.h"
#include "IOutStream.h"
#include "OutStream.h"
#include <fstream>
#include <string>

namespace Core_Loggers {
	Core_TypeWrappers::Interfaces::IOutStream FileTarget::grabOutStream() const {
		auto fileOutput = std::ofstream(filename);
		auto output = Core_TypeWrappers::OutStream(fileOutput);

		return output;
	}
	
	FileTarget::FileTarget(const std::string &filename) : filename(filename) {}
}
