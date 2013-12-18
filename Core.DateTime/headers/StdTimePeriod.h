/*
 * StdTimePeriod.h
 *
 *  Created on: Dec 15, 2013
 *      Author: baron
 */

#ifndef STDTIMEPERIOD_H_
#define STDTIMEPERIOD_H_

#include "IOutStream.h"
#include "EnumConverter.h"
#include <map>

namespace Core_DateTime {
	enum class StdTimePeriod {
#define X(a) a,
#include "StdTimePeriod.def"
#undef X
	};

	Core_TypeWrappers::Interfaces::IOutStream& operator<<(Core_TypeWrappers::Interfaces::IOutStream& os, const StdTimePeriod& obj);

	ENUMTOSTRING_DECL(Core_DateTime::StdTimePeriod);
}

#endif /* STDTIMEPERIOD_H_ */
