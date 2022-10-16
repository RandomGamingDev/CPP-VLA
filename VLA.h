#ifndef VLA_HEADER
#define VLA_HEADER

#include <cstdlib>

#define stack_alloc_open(capture, size, type, name)\
	 capture() { type* name = reinterpret_cast<type*>(alloca(size));

#define stack_alloc_close }();

#endif