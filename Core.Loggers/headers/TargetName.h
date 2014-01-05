/*
 * TargetName.h
 *
 * Created on: Jan 1, 2014
 * 	Author: baron
 *
 */

#ifndef TARGETNAME_H_
#define TARGETNAME_H_

#include "ITargetName.h"
#include <string>

namespace Core_Loggers {
	class TargetName : public Interfaces::ITargetName {
		private:
			const std::string &name; 

		public:
			std::string toString() const override;
			bool operator!=(const ITargetName &other) const override;
			bool operator==(const ITargetName &other) const override;
			bool operator<(const ITargetName &other) const override;

			TargetName(const std::string &name);
	};
}

#endif /* TARGETNAME_H_ */
