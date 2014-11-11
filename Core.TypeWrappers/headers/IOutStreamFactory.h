/*
 * IOutStreamFactory.h
 *
 * Created on: Nov 9, 2014
 *	Author: baron
 */

#ifndef IOUTSTREAMFACTORY_H_
#define IOUTSTREAMFACTORY_H_

#include "IOutStream.h"
#include <ostream>
#include <string>

namespace Core_TypeWrappers {
	namespace Interfaces {
		class IOutStreamFactory {
			private:

			public:
				virtual const IOutStream* const create(std::ostream &outstream) const = 0;
				virtual const IOutStream* const create(const std::string &filename) const = 0;
				virtual ~IOutStreamFactory() {}
		};
	}
}

#endif /* IOUTSTREAMFACTORY_H_ */
