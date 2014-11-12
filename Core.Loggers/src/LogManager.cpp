/*
 * LogManager.cpp
 *
 * Created on: Dec 20, 2013
 * 	Author: baron
 */

#include "LogManager.h"
#include "ILogger.h"
#include "LogLevel.h"
#include <string>
#include <map>
#include <vector>
#include <functional>
#include <exception>

namespace Core_Loggers {

	// protected
	void LogManager::dispose(const bool &disposing) {
		if (!disposed) {
			if (disposing) {
				// dispose resources
			}

			disposed = true;
		}
	}

	// public
	void LogManager::dispose() {
		dispose(true);
	}

	void LogManager::log(const std::string &message, const LogLevel &logLevel) const {
		try {
			auto& levelLoggers = loggers->at(logLevel);

			for(auto &logger : levelLoggers) {
				auto &loggerRef = logger.get();

				loggerRef.log(message, logLevel);
			}
		}
		catch (const std::out_of_range &e) { }
	}

	void LogManager::add(const LogLevel &logLevel, const Interfaces::ILogger &logger) {
		std::pair<std::map<const LogLevel, std::vector<std::reference_wrapper<const Interfaces::ILogger>>>::iterator, bool> emplaceStatus = loggers->emplace(logLevel, std::vector<std::reference_wrapper<const Interfaces::ILogger>>());
		
		emplaceStatus.first->second.push_back(std::cref(logger));
	}

	LogManager::LogManager(std::map<const LogLevel, std::vector<std::reference_wrapper<const Interfaces::ILogger>>>* const loggers) : loggers(loggers) {}
	
	LogManager::LogManager() : loggers(new std::map<const LogLevel, std::vector<std::reference_wrapper<const Interfaces::ILogger>>>) {}
	
	LogManager::~LogManager() {
		delete loggers;
	}
}
