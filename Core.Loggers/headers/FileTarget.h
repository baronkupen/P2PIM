/*
 * FileTarget.h
 *
 * Created on: Dec 23, 2013
 * 	Author: baron
 *
 */

#ifndef FILETARGET_H_
#define FILETARGET_H_

#include "Target.h"
#include "IOutStream.h"
#include <string>

namespace Core_Loggers {
	class FileTarget : public Target {
		private: 
			const std::string &filename;
			std::ofstream* createdFileOutput = nullptr;

		public:
			const Core_TypeWrappers::Interfaces::IOutStream* const grabOutStream() override;
			explicit FileTarget(const std::string &filename);
			~FileTarget();
	};
}

#endif /* FILETARGET_H_ */
