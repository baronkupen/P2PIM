/*
 * ConsoleTarget.h
 *
 * Created on: Dec 23, 2013
 * 	Author: baron
 *
 */

#ifndef CONSOLETARGET_H_
#define CONSOLETARGET_H_

#include "ITarget.h"
#include "IOutStream.h"
#include <ostream>

namespace Core_Loggers {
	class ConsoleTarget : public Interfaces::ITarget {
		private:
			std::ostream &outstream;
		public:
			Core_TypeWrappers::Interfaces::IOutStream grabOutStream() const override;
			explicit ConsoleTarget(std::ostream &outstream);
	};
}

#endif /* CONSOLETARGET_H_ */
