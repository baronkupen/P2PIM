/*
 * StdTimeConverter.h
 *
 *  Created on: Dec 15, 2013
 *      Author: baron
 */

#ifndef STDTIMECONVERTER_H_
#define STDTIMECONVERTER_H_

#include <ctime>
#include "StdTime.h"
#include "IStdTimeConverter.h"

namespace Core_DateTime {
	class StdTimeConverter : public Interfaces::IStdTimeConverter {
		private:
			const int StdBaseHour = 12;

		public:
			StdTime convertToStdTime(const tm *localTime) const override;
	};
}

#endif /* STDTIMECONVERTER_H_ */
