/*
 * ITargetName.h
 *
 * Created on: Jan 1, 2014
 * 	Author: baron
 *
 */

#ifndef ITARGETNAME_H_
#define ITARGETNAME_H_

#include <string>

namespace Core_Loggers {
	namespace Interfaces {
		class ITargetName {
			private:

			public:
				virtual std::string toString() const = 0; 
				virtual bool operator!=(const ITargetName &other) const = 0;
				virtual bool operator==(const ITargetName &other) const = 0;
				virtual bool operator<(const ITargetName &other) const = 0;
				virtual ~ITargetName() {}
		};
	}
}

#endif /* ITARGETNAME_H_ */
