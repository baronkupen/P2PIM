/* 
 * OutStreamFactory.h
 *
 * Created on: Nov 9, 2014
 *	Author: baron
 */
 
#ifndef OUTSTREAMFACTORY_H_
#define OUTSTREAMFACTORY_H_

#include "IOutStreamFactory.h"
#include "IOutStream.h"
#include <ostream>
#include <string>

namespace Core_TypeWrappers {
	class OutStreamFactory: public Interfaces::IOutStreamFactory {
		private:

		public:
			const Interfaces::IOutStream* const create(const std::ostream &outstream) const override;
			const Interfaces::IOutStream* const create(const std::string &filename) const override;
	};
}

#endif /* OUTSTREAMFACTORY_H_ */
