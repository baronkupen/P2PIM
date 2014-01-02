/*
 * LevelLoggers.h
 *
 * Created on Dec 19, 2013
 * 	Author: baron
 */

#ifndef LEVELLOGGERS_H_
#define LEVELLOGGERS_H_

#include "ILevelLoggers.h"
#include "ILogger.h"
#include "LogLevel.h"
#include <map>
#include <functional>

namespace Core_Loggers {
	class LevelLoggers : public Interfaces::ILevelLoggers {
		private:
			std::map<const LogLevel, const std::reference_wrapper<const Interfaces::ILogger>>* const loggers;

		public:

			const Interfaces::ILogger& getLevelLogger(const LogLevel &logLevel) const override;
			bool addLevelLogger(const LogLevel &logLevel, const Interfaces::ILogger &logger) override;

			explicit LevelLoggers(std::map<const LogLevel, const std::reference_wrapper<const Interfaces::ILogger>>* const  loggers);
			LevelLoggers();
			~LevelLoggers();
	};
}

#endif
