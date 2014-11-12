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
#include <string>
#include <vector>
#include <map>
#include <functional>

namespace Core_Loggers {
	class TargetConfig: public Interfaces::ITargetConfig {
		private:
			std::map<const LogLevel, std::vector<std::reference_wrapper< const std::string >>>* const config;

		public:
			void appendConfig(const LogLevel &logLevel, const std::string &name) override;
			TargetConfig(std::map<const LogLevel, std::vector<std::reference_wrapper<const std::string>>>* config);
			TargetConfig();
			virtual ~TargetConfig();
	};
}

#endif /* TARGETCONFIG_H_ */
