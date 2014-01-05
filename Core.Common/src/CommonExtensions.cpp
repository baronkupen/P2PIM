/*
 * CommonExtensions.cpp
 *
 * Created on: Jan 2, 2014
 * 	Author: baron
 *
 */

#include "CommonExtensions.h"
#include <functional>

namespace std {
	template<class T>
	bool operator<(const reference_wrapper<T> &a, const reference_wrapper<T> &b) {
		return a < b;
	}
}
