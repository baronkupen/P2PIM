/*
 * LogManagerFactory.cpp
 *
 * Created on: Dec 31, 2013
 * 	Author: baron
 */

#include "LogManagerFactory.h"
#include "ILogManager.h"
#include "LogManager.h"
#include "ITargetConfig.h"
#include "IDate.h"
#include "IDateTimeFormatter.h"

namespace Core_Loggers {

	LogManagerFactory::LogManagerFactory(const Core_DateTime::Interfaces::IDate &date, const Core_DateTime::Interfaces::IDateTimeFormatter &dateTimeFormatter) : date(date), dateTimeFormatter(dateTimeFormatter) {} 
	
	const Interfaces::ILogManager* const LogManagerFactory::create(const Interfaces::ITargetConfig &config) const {
		return nullptr;	
	}
}
