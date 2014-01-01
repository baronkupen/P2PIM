/*
 * Target.h
 *
 * Created on: Jan 1, 2014
 * 	Author: baron
 *
 */

#ifndef TARGET_H_
#define TARGET_H_

#include "ITarget.h"
#include "IOutStream.h"

namespace Core_Loggers {
	class Target : public Interfaces::ITarget {
		private:

		protected:
			Core_TypeWrappers::Interfaces::IOutStream* createdStream = nullptr;

		public:
			~Target();
	};
}

#endif /* TARGET_H_H */
