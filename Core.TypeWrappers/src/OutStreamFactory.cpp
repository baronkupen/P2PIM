/* 
 * OutStreamFactory.cpp
 *
 * Created on: Nov 9, 2014
 *	Author: baron
 */

#include "IOutStream.h"
#include "OutStream.h"
#include "OutStreamFactory.h"
#include <string>
#include <ostream>
#include <ofstream>

namespace Core_TypeWrappers {
	const Interfaces::IOutStream* const OutStreamFactory::create(const std::ostream &outstream) const {
		const Interfaces::IOutStream* const wrapper = new OutStream(outstream); 
		return wrapper;
	}
	
	const Interfaces::IOutStream* const OutStreamFactory::create(const std::string &filename) const {
		const std::ofstream* const fileStream = new std::ofstream(filename);
		
		return create(*fileStream);
	}
}
