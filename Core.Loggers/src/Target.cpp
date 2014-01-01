/*
 * Target.cpp
 *
 * Created on: Jan 1, 2014
 * 	Author: baron
 *
 */

#include "Target.h"

namespace Core_Loggers {
	Target::~Target() {
		delete createdStream;
		createdStream = nullptr;
	}
}
