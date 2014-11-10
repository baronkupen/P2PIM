/*
 * IDate.h
 *
 *  Created on: Dec 15, 2013
 *      Author: baron
 */

#ifndef IDATE_H_
#define IDATE_H_

#include <ctime>

namespace Core_DateTime {
	namespace Interfaces {
		class IDate {
			private:

			public:
				virtual time_t now() const = 0;
				virtual ~IDate() {}
		};
	}
}

#endif /* IDATE_H_ */
