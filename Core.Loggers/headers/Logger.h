/*
 * Logger.h
 *
 *  Created on: Dec 15, 2013
 *      Author: baron
 */

#ifndef LOGGER_H_
#define LOGGER_H_

#include "ILogger.h"
#include "IDisposable.h"
#include "IDate.h"
#include "IDateTimeFormatter.h"
#include "IOutStream.h"
#include "LogLevel.h"
#include <string>

namespace Core_Loggers {
	class Logger : public Interfaces::ILogger, public Common::Interfaces::IDisposable {
	private:
		Core_TypeWrappers::Interfaces::IOutStream &outStream;
		const Core_DateTime::Interfaces::IDate &date;
		const Core_DateTime::Interfaces::IDateTimeFormatter &dateTimeFormatter;
		bool active;
		bool disposed;
	protected:
		void dispose(const bool &disposing);
	public:
		void log(const std::string &message, const LogLevel &logLevel) const override;
		void dispose() override;
		Logger(Core_TypeWrappers::Interfaces::IOutStream &outStream, const Core_DateTime::Interfaces::IDate &date, const Core_DateTime::Interfaces::IDateTimeFormatter &dateTimeFormatter);
		Logger(Core_TypeWrappers::Interfaces::IOutStream &outStream, const Core_DateTime::Interfaces::IDate &date, const Core_DateTime::Interfaces::IDateTimeFormatter &dateTimeFormatter, bool active);
		~Logger();
	};
}

#endif /* LOGGER_H_ */
