/*
 * StdDateTimeFormatter.cpp
 *
 *  Created on: Dec 15, 2013
 *      Author: baron
 */

#include "StdDateTimeFormatter.h"
#include "StdTimeConverter.h"
#include "TimePeriodConverter.h"
#include <string>
#include <sstream>
#include <ctime>

namespace Core_DateTime {
	StdDateTimeFormatter::StdDateTimeFormatter(StdTimeConverter &timeConverter, TimePeriodConverter &periodConverter) : timeConverter(timeConverter), periodConverter(periodConverter) {}

	std::string StdDateTimeFormatter::padCharactersLeft(const std::string &baseString, const char &padding, const int &finalSize) const {
		std::string finalString = baseString;

		while (finalString.length() < finalSize) {
			finalString = padding + finalString;
		}

		return finalString;
	}

	std::string StdDateTimeFormatter::padCharactersLeft(const int &number, const char &padding, const int &finalSize) const {
		std::ostringstream convert;

		convert << number;
		std::string baseString = convert.str();

		return padCharactersLeft(baseString, padding, finalSize);
	}

	std::string StdDateTimeFormatter::toLongDate(const time_t &time) const {
		char* longDate = ctime(&time);
		std::string convertedLongDate = std::string(longDate);

		return convertedLongDate;
	}

	std::string StdDateTimeFormatter::toLongTime(const time_t &time) const {
		tm *localTime = localtime(&time);

		StdTime stdTime = timeConverter.convertToStdTime(localTime);

		return toLongTime(stdTime);
	}

	std::string StdDateTimeFormatter::toShortTime(const time_t &time) const {
		tm *localTime = localtime(&time);

		StdTime stdTime = timeConverter.convertToStdTime(localTime);

		return toShortTime(stdTime);
	}

	std::string StdDateTimeFormatter::toShortDate(const time_t &time) const {
		std::ostringstream convert;

		tm *localTime = localtime(&time);

		int day = localTime->tm_mday;
		int month = localTime->tm_mon + 1; // tm_mon is base 0
		int yearSince1900 = localTime->tm_year;
		int year = yearSince1900 += BaseTimeYear;

		convert << month << "/" << day << "/" << year;
		std::string formattedDate = convert.str();

		return formattedDate;
	}

	std::string StdDateTimeFormatter::toLongTime(const StdTime &time) const {
		std::string formattedHour = padCharactersLeft(time.hour, TimePadding, TimeSectionSize);
		std::string formattedMinute = padCharactersLeft(time.minute, TimePadding, TimeSectionSize);
		std::string formattedSecond = padCharactersLeft(time.second, TimePadding, TimeSectionSize);
		std::string formattedPeriod = periodConverter.convertStdTimePeriod(time.period);

		std::string formattedTime = formattedHour + ":" + formattedMinute + ":" + formattedSecond + " " + formattedPeriod;
		return formattedTime;
	}

	std::string StdDateTimeFormatter::toShortTime(const StdTime &time) const {
		std::string formattedHour = padCharactersLeft(time.hour, TimePadding, TimeSectionSize);
		std::string formattedMinute = padCharactersLeft(time.minute, TimePadding, TimeSectionSize);
		std::string formattedPeriod = periodConverter.convertStdTimePeriod(time.period);

		std::string formattedTime = formattedHour + ":" + formattedMinute + " " + formattedPeriod;
		return formattedTime;
	}
}


