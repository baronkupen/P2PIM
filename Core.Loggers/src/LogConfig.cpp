/*
 * LogConfig,cpp
 *
 * Created on: Dec 23, 2013
 * 	Author: baron
 *
 */

#include "LogConfig.h"
#include "ITarget.h"
#include <string>
#include <map>
#include <functional>

namespace Core_Loggers {
	bool LogConfig::addTarget(const std::string &targetName, const Interfaces::ITarget &target) {
		std::pair<std::map<const std::string, const std::reference_wrapper<const Interfaces::ITarget>>::iterator, bool> insertStatus = targets.insert( std::pair<const std::string, const std::reference_wrapper<const Interfaces::ITarget>>(targetName, std::cref(target)));
		return insertStatus.second;
	}

	LogConfig::LogConfig(std::map<const std::string, const std::reference_wrapper<const Interfaces::ITarget>> targets) : targets(targets) {}
	LogConfig::LogConfig() {}
}
