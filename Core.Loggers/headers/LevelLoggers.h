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
#include <vector>
#include <map>
#include <functional>

namespace Core_Loggers {
	class LevelLoggers : public Interfaces::ILevelLoggers {
		private:
			std::map<const LogLevel, std::vector<std::reference_wrapper<const Interfaces::ILogger>>>* const loggers;

		public:

			const std::vector<std::reference_wrapper<const Interfaces::ILogger>>& getLoggers(const LogLevel &logLevel) const override;
			void add(const LogLevel &logLevel, const Interfaces::ILogger &logger) override;

			explicit LevelLoggers(std::map<const LogLevel, std::vector<std::reference_wrapper<const Interfaces::ILogger>>>* const loggers);
			LevelLoggers();
			~LevelLoggers();
	};
}

#endif
