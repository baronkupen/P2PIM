/*
 * LogManager.h
 *
 * Created on: Dec 18, 2013
 * 	Author: baron
 */

#ifndef LOGMANAGER_H_
#define LOGMANAGER_H_

#include "ILogManager.h"
#include "IDisposable.h"
#include "ILevelLoggers.h"
#include "LogLevel.h"
#include <string>

namespace Core_Loggers {
	class LogManager : public Interfaces::ILogManager, public Common::Interfaces::IDisposable {
		private:
			const Interfaces::ILevelLoggers &levelLoggers;		
			bool disposed;
		protected:
			void dispose(const bool &disposing);
		public:
			void log(const std::string &message, const LogLevel &logLevel) const override;
			void dispose() override;
			explicit LogManager(const Interfaces::ILevelLoggers &levelLoggers);
	};
}

#endif /* LOGMANAGER_H_ */
