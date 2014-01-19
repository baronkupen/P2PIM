/*
 * TargetConfig.cpp
 *
 * Created on: Jan 5, 2014
 * 	Author: baron
 *
 */

#include "TargetConfig.h"
#include "LogLevel.h"
#include "ITargetName.h"
#include <vector>
#include <map>
#include <functional>

namespace Core_Loggers {
	TargetConfig::TargetConfig(std::map<const LogLevel, std::vector<std::reference_wrapper<const Interfaces::ITargetName>>>* config) : config(config) {}

	TargetConfig::TargetConfig() : config(new std::map<const LogLevel, std::vector<std::reference_wrapper<const Interfaces::ITargetName>>>) {}

	TargetConfig::~TargetConfig() {
		delete config;
	}

	void TargetConfig::appendConfig(const LogLevel &logLevel, const Interfaces::ITargetName &targetName) {
		std::pair<std::map<const LogLevel, std::vector<std::reference_wrapper<const Interfaces::ITargetName>>>::iterator, bool> emplaceStatus = config->emplace(logLevel);

		emplaceStatus.first->second.push_back(std::cref(targetName));
	}
}
