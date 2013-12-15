/*
 * OutStream.h
 *
 *  Created on: Dec 15, 2013
 *      Author: baron
 */

#ifndef OUTSTREAM_H_
#define OUTSTREAM_H_

#include "IOutStream.h"
#include <string>
#include <ostream>

namespace Core_Loggers {
	class OutStream : public Interfaces::IOutStream {
		private:
		std::ostream &stream;

		public:
		IOutStream& operator<<(const char* message) override;
		IOutStream& operator<<(const std::string &message) override;
		IOutStream& operator<<(std::ostream& (*func)(std::ostream&)) override;
		explicit OutStream(std::ostream &stream);
		~OutStream();
	};
}

#endif /* OUTSTREAM_H_ */
