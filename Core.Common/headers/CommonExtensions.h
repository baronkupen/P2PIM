/*
 * CommonExtensions.h
 *
 * Created on: Jan 2, 2014
 * 	Author: baron
 *
 */

#ifndef COMMONEXTENSIONS_H_
#define COMMONEXTENSIONS_H_

#include <functional>

namespace std {
	template<class T>
	bool operator<(const reference_wrapper<T> &a, const reference_wrapper<T> &b) {
		return a < b;
	}
}

#endif /* COMMONEXTENSIONS_H_ */
