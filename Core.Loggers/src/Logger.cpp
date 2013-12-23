/*
 * Logger.cpp
 *
 *  Created on: Dec 15, 2013
 *      Author: baron
 */

#include "Logger.h"
#include "IDate.h"
#include "IDateTimeFormatter.h"
#include "IOutStream.h"
#include "LogLevel.h"
#include <string>
#include <iostream>

namespace Core_Loggers {

	//protected
	void Logger::dispose(const bool &disposing) {
		if (!disposed) {
			if (disposing) {
				// Dispose resources.
			}
		}
		disposed = true;
	}

	//public
	Logger::Logger(Core_TypeWrappers::Interfaces::IOutStream &outStream, Core_DateTime::Interfaces::IDate &date, Core_DateTime::Interfaces::IDateTimeFormatter &dateTimeFormatter) : outStream(outStream), date(date), dateTimeFormatter(dateTimeFormatter), active(true), disposed(false) { }

	Logger::Logger(Core_TypeWrappers::Interfaces::IOutStream &outStream, Core_DateTime::Interfaces::IDate &date, Core_DateTime::Interfaces::IDateTimeFormatter &dateTimeFormatter, bool active) : outStream(outStream), date(date), dateTimeFormatter(dateTimeFormatter), active(active), disposed(false) { }

	Logger::~Logger() {
		dispose(false);
	}

	void Logger::dispose() {
		dispose(true);
	}

	void Logger::log(const std::string &message, const LogLevel &logLevel) const {
		auto currentTime = date.now();
		auto formattedDate = dateTimeFormatter.toShortDate(currentTime);
		auto formattedTime = dateTimeFormatter.toLongTime(currentTime);

		outStream << formattedDate << " " << formattedTime << " " << logLevel << ": " << message << std::endl;
	}
}


