/*
 * TargetConfig.cpp
 *
 * Created on: Jan 5, 2014
 * 	Author: baron
 *
 */

#include "TargetConfig.h"
#include "LogLevel.h"
#include <string>
#include <vector>
#include <map>
#include <functional>

namespace Core_Loggers {
	TargetConfig::TargetConfig(std::map<const LogLevel, std::vector<std::reference_wrapper<const std::string>>>* config) : config(config) {}

	TargetConfig::TargetConfig() : config(new std::map<const LogLevel, std::vector<std::reference_wrapper<const std::string>>>) {}

	TargetConfig::~TargetConfig() {
		delete config;
	}

	void TargetConfig::appendConfig(const LogLevel &logLevel, const std::string &name) {
		std::pair<std::map<const LogLevel, std::vector<std::reference_wrapper<const std::string>>>::iterator, bool> emplaceStatus = config->emplace(logLevel, std::vector<std::reference_wrapper<const std::string>>());

		emplaceStatus.first->second.push_back(std::cref(name));
	}
}
