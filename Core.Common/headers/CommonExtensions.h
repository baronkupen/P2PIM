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

template<class T>
bool operator<(const std::reference_wrapper<T> &a, const std::reference_wrapper<T> &b);

#endif /* COMMONEXTENSIONS_H_ */
