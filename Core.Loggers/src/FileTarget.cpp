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
	const Core_TypeWrappers::Interfaces::IOutStream* const FileTarget::grabOutStream() const {
		std::ofstream* const fileOutput = new std::ofstream(filename);
		const Core_TypeWrappers::Interfaces::IOutStream* const output = new Core_TypeWrappers::OutStream(*fileOutput);

		return output;
	}
	
	FileTarget::FileTarget(const std::string &filename) : filename(filename) {}
}
