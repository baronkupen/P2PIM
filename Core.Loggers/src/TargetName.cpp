/* 
 * TargetName.cpp
 *
 * Created on: Jan 1, 2014
 * 	Author: baron
 *
 */

#include "TargetName.h"
#include "ITargetName.h"
#include <string>

namespace Core_Loggers {
	
	TargetName::TargetName(const std::string &name) : name(name) {} 
	
	std::string TargetName::toString() const {
		return name;
	}
	
	bool TargetName::operator!=(const ITargetName &other) const {
		return !(*this == other);	
	}
	
	bool TargetName::operator==(const ITargetName &other) const {
		std::string otherName = other.toString();

		return name == otherName;
	}

	bool TargetName::operator<(const ITargetName &other) const {
		std::string otherName = other.toString();

		return name < otherName;
	}
}

