/*
 * IStdTimeConverter.h
 *
 * Created on: Nov 10, 2014
 *	Author: baron
 */

 #ifndef ISTDTIMECONVERTER_H_
 #define ISTDTIMECONVERTER_H_

#include <ctime>
#include "StdTime.h"

namespace Core_DateTime {
	namespace Interfaces {
		class IStdTimeConverter {
			private:

			public:
				virtual StdTime convertToStdTime(const tm *localTime) const = 0;
				virtual ~IStdTimeConverter() {}
		};
	}
}

#endif /* ISTDTIMECONVERTER_H_ */
