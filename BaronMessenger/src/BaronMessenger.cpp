//============================================================================
// Name        : BaronMessenger.cpp
// Author      : _baron
// Version     :
// Copyright   : Have at it
// Description : Test main for baronmessenger
//============================================================================

#include "Logger.h"
#include "Date.h"
#include "StdDateTimeFormatter.h"
#include "StdTimeConverter.h"
#include "OutStream.h"
#include "LogLevel.h"
#include "ILogger.h"
#include "ILevelLoggers.h"
#include "LevelLoggers.h"
#include "ILogManager.h"
#include "LogManager.h"
#include "IOutStreamFactory.h"
#include "OutStreamFactory.h"
#include <vector>
#include <map>
#include <iostream>
#include <fstream>
#include <functional>

int main(int argc, const char * argv[])
{
	//this line for testing
	Core_TypeWrappers::OutStreamFactory streamFactory;

	Core_DateTime::StdTimeConverter timeConverter;
	Core_DateTime::StdDateTimeFormatter dateFormatter(timeConverter);
	Core_DateTime::Date date;

	Core_TypeWrappers::OutStream outstream(std::cout);
	
	std::ofstream outFile;
	outFile.open("log.txt");

	Core_TypeWrappers::OutStream filestream(outFile);

	Core_Loggers::Interfaces::ILogger* logger = new Core_Loggers::Logger(outstream, date, dateFormatter);
	Core_Loggers::Interfaces::ILogger* fileLogger = new Core_Loggers::Logger(filestream, date, dateFormatter);

	std::vector<std::reference_wrapper<const Core_Loggers::Interfaces::ILogger>> traceLoggers;
	traceLoggers.push_back(std::cref(*logger));

	std::vector<std::reference_wrapper<const Core_Loggers::Interfaces::ILogger>> debugLoggers;
	debugLoggers.push_back(std::cref(*fileLogger));

	auto loggerMap = new std::map<const Core_Loggers::LogLevel, std::vector<std::reference_wrapper<const Core_Loggers::Interfaces::ILogger>>> { 
		{Core_Loggers::LogLevel::Trace, traceLoggers },
		{Core_Loggers::LogLevel::Debug, debugLoggers },
	};

	Core_Loggers::LevelLoggers levelLoggers(loggerMap);
	Core_Loggers::LogManager logManager(levelLoggers);

	logManager.log("This is a test.", Core_Loggers::LogLevel::Debug);
	logManager.log("This is another test.", Core_Loggers::LogLevel::Trace);

     return 0;
}

