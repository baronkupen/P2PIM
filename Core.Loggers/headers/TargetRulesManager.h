/*
 * TargetRulesManager.h
 *
 * Created on: Jan 1, 2014
 * 	Author: baron
 *
 */

#ifndef TARGETRULESMANAGER_H_
#define TARGETRULESMANAGER_H_

#include "ITargetRulesManager.h"
#include "INamedTargets.h"
#include "ITargetConfig.h"

namespace Core_Loggers {
	class TargetRulesManager : public Interfaces::ITargetRulesManager {
		private:
			const INamedTargets &namedTargets;

		public:
			const ITargetConfig* const createConfig() const override;
			TargetRulesManager(const INamedTargets &namedTargets);
			~TargetRulesManager();
	};
}

#endif /* TARGETRULESMANAGER_H_ */
