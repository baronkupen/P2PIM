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

namespace Core_TypeWrappers {
	class OutStream : public Interfaces::IOutStream {
		private:
		std::ostream &stream;

		public:
		const IOutStream& operator<<(const char* message) const override;
		const IOutStream& operator<<(const std::string &message) const override;
		const IOutStream& operator<<(std::ostream& (*func)(std::ostream&)) const override;
		explicit OutStream(std::ostream &stream);
		~OutStream();
	};
}

#endif /* OUTSTREAM_H_ */
