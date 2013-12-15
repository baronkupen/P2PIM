/*
 * IDisposable.h
 *
 *  Created on: Dec 15, 2013
 *      Author: baron
 */

#ifndef IDISPOSABLE_H_
#define IDISPOSABLE_H_

namespace Common {
	namespace Interfaces {
		class IDisposable {
			private:

			public:
			virtual void dispose() = 0;
			virtual ~IDisposable() {}
		};
	}
}

#endif /* IDISPOSABLE_H_ */
