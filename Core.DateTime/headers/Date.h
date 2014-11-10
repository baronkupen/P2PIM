/*
 * Date.h
 *
 *  Created on: Dec 15, 2013
 *      Author: baron
 */

#ifndef DATE_H_
#define DATE_H_

#include "IDate.h"
#include <ctime>

namespace Core_DateTime {
	class Date : public Interfaces::IDate {
		private:

		public:
			time_t now() const override;
	};
}

#endif /* DATE_H_ */
