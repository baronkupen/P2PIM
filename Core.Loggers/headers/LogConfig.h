/*
 * LogConfig.h
 *
 * Created on: Dec 23, 2013
 * 	Author: baron
 *
 */

#ifndef LOGCONFIG_H_
#define LOGCONFIG_H_

#include "ILogConfig.h"
#include "ITarget.h"
#include <string>
#include <map>
#include <functional>

namespace Core_Loggers {
	class LogConfig : public Interfaces::ILogConfig {
		private:
			std::map<const std::string, const std::reference_wrapper<const Interfaces::ITarget>> targets;

		public:
			bool addTarget(const std::string targetName, const Interfaces::ITarget &target) override;
			explicit LogConfig(std::map<const std::string, const std::reference_wrapper<const Interfaces::ITarget>> targets);
			LogConfig();
	};
}

#endif /* LOGCONFIG_H_ */
