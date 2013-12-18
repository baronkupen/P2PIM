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
#include "OutStream.h"
#include "LogLevel.h"
#include <iostream>

int main(int argc, const char * argv[])
{
	Core_DateTime::StdTimeConverter timeConverter;
	auto dateFormatter = Core_DateTime::StdDateTimeFormatter(timeConverter);
	auto date = Core_DateTime::Date();

	auto outstream = Core_TypeWrappers::OutStream(std::cout);
	auto logger = Core_Loggers::Logger(outstream, date, dateFormatter, true);

	logger.log("This is a test.", Core_Loggers::LogLevel::Debug);
	logger.log("This is another test.", Core_Loggers::LogLevel::Trace);

    return 0;
}

