/*
 * EnumConverter.h
 *
 *  Created on: Dec 15, 2013
 *      Author: baron
 */

#ifndef ENUMCONVERTER_H_
#define ENUMCONVERTER_H_

#define ENUMTOSTRING_DECL(TYPE) \
const char* toString(TYPE v);

#define ENUMTOSTRING(TYPE, MAP) \
const char* toString(TYPE v) { \
return MAP[v]; \
}

#endif /* ENUMCONVERTER_H_ */
