/*
 * LevelLoggers.cpp
 *
 * Created on Dec 19, 2013
 * 	Author: baron
 */

#include "LevelLoggers.h"
#include "ILevelLoggers.h"
#include "ILogger.h"
#include "LogLevel.h"
#include <vector>
#include <map>
#include <functional>

namespace Core_Loggers {
	
	const std::vector<std::reference_wrapper<const Interfaces::ILogger>>& LevelLoggers::getLevelLoggers(const LogLevel &logLevel) const {
		return loggers->at(logLevel);
	}

	void LevelLoggers::addLevelLogger(const LogLevel &logLevel, const Interfaces::ILogger &logger) {
		std::pair<std::map<const LogLevel, std::vector<std::reference_wrapper<const Interfaces::ILogger>>>::iterator, bool> emplaceStatus = loggers->emplace(logLevel);
		
		emplaceStatus.first->second.push_back(std::cref(logger));
	}

	LevelLoggers::LevelLoggers(std::map<const LogLevel, std::vector<std::reference_wrapper<const Interfaces::ILogger>>>* const loggers) : loggers(loggers) {}
	
	LevelLoggers::LevelLoggers() : loggers(new std::map<const LogLevel, std::vector<std::reference_wrapper<const Interfaces::ILogger>>>) {}
	
	LevelLoggers::~LevelLoggers() {
		delete loggers;
	}
}
