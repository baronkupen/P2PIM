/*
 * FileTarget.h
 *
 * Created on: Dec 23, 2013
 * 	Author: baron
 *
 */

#ifndef FILETARGET_H_
#define FILETARGET_H_

#include "ITarget.h"
#include "IOutStream.h"
#include <string>

namespace Core_Loggers {
	class FileTarget : public Interfaces::ITarget {
		private: 
			const std::string &filename;

		public:
			const Core_TypeWrappers::Interfaces::IOutStream* const grabOutStream() const override;
			explicit FileTarget(const std::string &filename);
	};
}

#endif /* FILETARGET_H_ */
