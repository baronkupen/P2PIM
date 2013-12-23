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

namespace Core_Loggers {
	class LevelLoggers : public Interfaces::ILevelLoggers {
		private:
			std::map<LogLevel, std::reference_wrapper<const Interfaces::ILogger>> &loggers;

		public:

			const Interfaces::ILogger& getLevelLogger(const LogLevel &logLevel) const override;
			bool addLevelLogger(const LogLevel &logLevel, const Interfaces::ILogger &logger) override;

			explicit LevelLoggers(std::map<LogLevel, std::reference_wrapper<const Interfaces::ILogger>> &loggers);
			LevelLoggers();
			~LevelLoggers();
	};
}

#endif
