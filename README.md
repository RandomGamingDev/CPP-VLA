# CPP-VLA

VLA library made for C++

VLAs (Variable Length Arrays) are commonly used, stack-allocated arrays from C99, that don't work in standardized C++. This library is a header only library that brings VLAs to C++.

Allocate with `stack_alloc_open`, then close and call with `stack_alloc_close`.
