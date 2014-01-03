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
#include "ITargetConfig.h"

namespace Core_Loggers {
	class LogManagerFactory : public Interfaces::ILogManagerFactory {
		private:
			const Core_DateTime::Interfaces::IDate &date;
			const Core_DateTime::Interfaces::IDateTimeFormatter &dateTimeFormatter;

		public:
			const Interfaces::ILogManager* const CreateLogManager(const Interfaces::ITargetConfig &config) const override;
			LogManagerFactory(const Core_DateTime::Interfaces::IDate &date, const Core_DateTime::Interfaces::IDateTimeFormatter &dateTimeFormatter);
	};
}

#endif /* LOGMANAGERFACTORY_H_ */
