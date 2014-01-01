/*
 * ConsoleTarget.h
 *
 * Created on: Dec 23, 2013
 * 	Author: baron
 *
 */

#ifndef CONSOLETARGET_H_
#define CONSOLETARGET_H_

#include "Target.h"
#include "IOutStream.h"
#include <ostream>

namespace Core_Loggers {
	class ConsoleTarget : public Target {
		private:
			std::ostream &outstream;

		public:
			const Core_TypeWrappers::Interfaces::IOutStream* const grabOutStream() override;
			explicit ConsoleTarget(std::ostream &outstream);
	};
}

#endif /* CONSOLETARGET_H_ */
