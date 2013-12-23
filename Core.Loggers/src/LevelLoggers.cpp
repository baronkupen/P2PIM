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
#include <map>

namespace Core_Loggers {
	
	const Interfaces::ILogger& LevelLoggers::getLevelLogger(const LogLevel &logLevel) const {
		return loggers.at(logLevel);
	}

	bool LevelLoggers::addLevelLogger(const LogLevel &logLevel, const Interfaces::ILogger &logger) {
		std::pair<std::map<LogLevel, std::reference_wrapper<const Interfaces::ILogger>>::iterator, bool> insertStatus = loggers.insert( std::pair<LogLevel, std::reference_wrapper<const Interfaces::ILogger>>(logLevel, std::cref(logger)));
		return insertStatus.second;
	}

	LevelLoggers::LevelLoggers(std::map<LogLevel, std::reference_wrapper<const Interfaces::ILogger>> &loggers) : loggers(loggers) {}
	
	LevelLoggers::~LevelLoggers() { }
}
