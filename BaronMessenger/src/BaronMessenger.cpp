//============================================================================
// Name        : BaronMessenger.cpp
// Author      : _baron
// Version     :
// Copyright   : Have at it
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "Logger.h"
#include "Date.h"
#include "StdDateTimeFormatter.h"
#include "StdTimeConverter.h"
#include "OutStream.h"
#include "LogLevel.h"
#include "ILevelLoggers.h"
#include "LevelLoggers.h"
#include "ILogManager.h"
#include "LogManager.h"
#include <map>
#include <iostream>
#include <fstream>
#include <functional>

int main(int argc, const char * argv[])
{
	Core_DateTime::StdTimeConverter timeConverter;
	auto dateFormatter = Core_DateTime::StdDateTimeFormatter(timeConverter);
	auto date = Core_DateTime::Date();

	auto outstream = Core_TypeWrappers::OutStream(std::cout);
	
	std::ofstream outFile;
	outFile.open("log.txt");

	auto filestream = Core_TypeWrappers::OutStream(outFile);

	auto logger = Core_Loggers::Logger(outstream, date, dateFormatter);
	auto fileLogger = Core_Loggers::Logger(filestream, date, dateFormatter);

	auto loggerMap = std::map<Core_Loggers::LogLevel, std::reference_wrapper<const Core_Loggers::Interfaces::ILogger>> { 
		{Core_Loggers::LogLevel::Trace, logger},
		{Core_Loggers::LogLevel::Debug, fileLogger},
	};

	auto levelLoggers = Core_Loggers::LevelLoggers(loggerMap);
	auto logManager = Core_Loggers::LogManager(levelLoggers);


	logManager.log("This is a test.", Core_Loggers::LogLevel::Debug);
	logManager.log("This is another test.", Core_Loggers::LogLevel::Trace);

	outFile.flush();
	outFile.close();

     return 0;
}

