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
	const Core_TypeWrappers::Interfaces::IOutStream* const FileTarget::grabOutStream() {
		if (createdFileOutput != nullptr) {
			createdFileOutput = new std::ofstream(filename);
		}

		if (createdStream != nullptr) { 
			createdStream = new Core_TypeWrappers::OutStream(*createdFileOutput);
		}

		return createdStream;
	}
	
	FileTarget::FileTarget(const std::string &filename) : filename(filename) {}
	
	FileTarget::~FileTarget() {
		delete createdFileOutput;
		createdFileOutput = nullptr;
	}
}
