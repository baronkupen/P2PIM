/* 
 * NamedTargets.cpp
 *
 * Created on: Jan 1, 2014
 * 	Author: baron
 *
 */

#include "NamedTargets.h"
#include "ITargetName.h"
#include "ITarget.h"
#include <map>
#include <functional>

namespace Core_Loggers {
	bool NamedTargets::addTarget(const Interfaces::ITargetName &targetName, const Interfaces::ITarget &target) {
		std::pair<std::map<const std::reference_wrapper<const Interfaces::ITargetName>, const std::reference_wrapper<const Interfaces::ITarget>>::iterator, bool> insertStatus = targets->insert(std::pair<const std::reference_wrapper<const Interfaces::ITargetName>, const std::reference_wrapper<const Interfaces::ITarget>>(std::cref(targetName), std::cref(target)));
		return insertStatus.second;
	}

	NamedTargets::NamedTargets(std::map<const std::reference_wrapper<const Interfaces::ITargetName>, const std::reference_wrapper<const Interfaces::ITarget>>* targets) : targets(targets) {}

	NamedTargets::NamedTargets() : targets(new std::map<const std::reference_wrapper<const Interfaces::ITargetName>, const std::reference_wrapper<const Interfaces::ITarget>>) {}

	NamedTargets::~NamedTargets() {
		delete targets;
	}
}
