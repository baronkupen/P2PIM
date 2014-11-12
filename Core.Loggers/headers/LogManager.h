/*
 * LogManager.h
 *
 * Created on: Dec 18, 2013
 * 	Author: baron
 */

#ifndef LOGMANAGER_H_
#define LOGMANAGER_H_

#include "ILogManager.h"
#include "IDisposable.h"
#include "ILogger.h"
#include "LogLevel.h"
#include <map>
#include <vector>
#include <functional>
#include <string>

namespace Core_Loggers {
	class LogManager : public Interfaces::ILogManager, public Common::Interfaces::IDisposable {
		private:
			std::map<const LogLevel, std::vector<std::reference_wrapper<const Interfaces::ILogger>>>* const loggers;
			bool disposed;
		protected:
			void dispose(const bool &disposing);
		public:
			void log(const std::string &message, const LogLevel &logLevel) const override;
			void add(const LogLevel &logLevel, const Interfaces::ILogger &logger) override;
			void dispose() override;
			LogManager();
			explicit LogManager(std::map<const LogLevel, std::vector<std::reference_wrapper<const Interfaces::ILogger>>>* const loggers);
			virtual ~LogManager();
	};
}

#endif /* LOGMANAGER_H_ */
