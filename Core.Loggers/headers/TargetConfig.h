/*
 * TargetConfig.h
 *
 * Created on: Jan 1, 2014
 * 	Author: baron
 *
 */

#ifndef TARGETCONFIG_H_
#define TARGETCONFIG_H_

#include "ITargetConfig.h"
#include "LogLevel.h"
#include "ITargetName.h"
#include <vector>
#include <map>
#include <functional>

namespace Core_Loggers {
	class TargetConfig: public Interfaces::ITargetConfig {
		private:
			std::map<const LogLevel, std::vector<const std::reference_wrapper< const Interfaces::ITargetName>>>* const config;

		public:
			bool appendConfig(const LogLevel logLevel, const Interfaces::ITargetName &targetName) override;
			TargetConfig(std::map<const LogLevel, std::vector<const std::reference_wrapper<const Interfaces::ITargetName>>>* config);
			TargetConfig();
			~TargetConfig();
	};
}

#endif /* TARGETCONFIG_H_ */
