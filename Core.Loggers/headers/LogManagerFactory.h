/*
 * LogManagerFactory.h
 *
 * Created on: Dec 23, 2013
 * 	Author: baron
 */

#ifndef LOGMANAGERFACTORY_H_
#define LOGMANAGERFACTORY_H_

#include "ILogManagerFactory.h"
#include "ILogManager.h"
#include "IDate.h"
#include "IDateTimeFormatter.h"

namespace Core_Loggers {
	class LogManagerFactory : public Interfaces:ILogManagerFactory {
		private:
			Core_DateTime::Interfaces::IDate &date;
			Core_DateTime::Interfaces::IDateTimeFormatter &dateTimeFormatter;

		public:
			ILogManager CreateLogManager(const Interfaces::ILogConfig &config) const;
			LogManagerFactory(Core_DateTime::Interfaces::IDate &date, Core_DateTime::Interfaces::IDateTimeFormatter &dateTimeFormatter);
	};
}

#endif /* LOGMANAGERFACTORY_H_ */
