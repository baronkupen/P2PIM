/*
 * Target.h 
 *
 * Created on: Nov 12, 2014
 *	Author: baron
 */

#ifndef TARGET_H_
#define TARGET_H_

#include "ITarget.h"
#include "IOutStream.h"
#include <string>

namespace Core_Loggers {
	class Target : public Interfaces::ITarget {
		private:
			const std::string name;
			const Core_TypeWrappers::Interfaces::IOutStream* const outStream;
		public:
			std::string getName() const override;
			const Core_TypeWrappers::Interfaces::IOutStream* const getStream() const override;
		     Target(const std::string &name, const Core_TypeWrappers::Interfaces::IOutStream* const outStream);	
			virtual ~Target();
	};
}
#endif /* TARGET_H_ */
