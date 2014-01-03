/*
 * CommonExtensions.cpp
 *
 * Created on: Jan 2, 2014
 * 	Author: baron
 *
 */

#include "CommonExtensions.h"
#include <functional>

template<class T>
bool operator<(const std::reference_wrapper<T> &a, const std::reference_wrapper<T> &b) {
	return a < b;
}
