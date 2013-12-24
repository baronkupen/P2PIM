/*
 * LogManager.cpp
 *
 * Created on: Dec 20, 2013
 * 	Author: baron
 */

#include "LogManager.h"
#include "ILogger.h"
#include "ILevelLoggers.h"
#include "LogLevel.h"
#include <string>

namespace Core_Loggers {

	// protected
	void Core_Loggers::LogManager::dispose(const bool &disposing) {
		if (!disposed) {
			if (disposing) {
				// dispose resources
			}

			disposed = true;
		}
	}

	void Core_Loggers::LogManager::dispose() {
		dispose(true);
	}

	void Core_Loggers::LogManager::log(const std::string &message, const LogLevel &logLevel) const {
		auto& logger = levelLoggers.getLevelLogger(logLevel);

		logger.log(message, logLevel);
	}

	Core_Loggers::LogManager::LogManager(const Interfaces::ILevelLoggers &levelLoggers) : levelLoggers(levelLoggers) {}

}
