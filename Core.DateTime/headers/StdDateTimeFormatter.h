/*
 * StdDateTimeFormatter.h
 *
 *  Created on: Dec 15, 2013
 *      Author: baron
 */

#ifndef STDDATETIMEFORMATTER_H_
#define STDDATETIMEFORMATTER_H_

#include <string>
#include <ctime>
#include "StdTime.h"
#include "StdTimeConverter.h"
#include "IDateTimeFormatter.h"

namespace Core_DateTime {
	class StdDateTimeFormatter : public Interfaces::IDateTimeFormatter {
	private:
		const int BaseTimeYear = 1900;
		const int TimeSectionSize = 2;
		const char TimePadding = '0';

		StdTimeConverter &timeConverter;

		std::string padCharactersLeft(const int &number, const char &padding, const int &finalSize) const;
		std::string padCharactersLeft(const std::string &baseString, const char &padding, const int &finalSize) const;

	public:
		std::string toLongTime(const time_t &time) const override;
		std::string toLongDate(const time_t &time) const override;
		std::string toShortTime(const time_t &time) const override;
		std::string toShortDate(const time_t &time) const override;
		std::string toLongTime(const StdTime &time) const override;
		std::string toShortTime(const StdTime &time) const override;

		StdDateTimeFormatter(StdTimeConverter &timeConverter);
	};
}

#endif /* STDDATETIMEFORMATTER_H_ */
