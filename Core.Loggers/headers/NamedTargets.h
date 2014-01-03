/*
 * NamedTargets.h
 *
 * Created on: Jan 1, 2014
 * 	Author: baron
 *
 */

#ifndef NAMEDTARGETS_H_
#define NAMEDTARGETS_H_

#include "INamedTargets.h"
#include "ITargetName.h"
#include "ITarget.h"
#include "CommonExtensions.h"
#include <map>
#include <functional>

namespace Core_Loggers {
	class NamedTargets : public Interfaces::INamedTargets {
		private:
			std::map<const std::reference_wrapper<const Interfaces::ITargetName>, const std::reference_wrapper<const Interfaces::ITarget>>* const targets;

		public:
			bool addTarget(const Interfaces::ITargetName &targetName, const Interfaces::ITarget &target) override;
			NamedTargets(std::map<const std::reference_wrapper<const Interfaces::ITargetName>, const std::reference_wrapper<const Interfaces::ITarget>>* targets);
			NamedTargets();
			~NamedTargets();
	};
}

#endif /* NAMEDTARGETS_H_ */
