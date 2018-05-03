# Stub-Trignometric
An stub for cross compilers for precomputing the cosine of the angles because calculating cosine in runtime is time consuming.

This is a libray for generating the cosine of the angles at compile time, so no-runtime overhead is present. This library is desined & compatible for following platforms:

* ARMv-8 A, ARMv-8 M - Tested on GNU C++ Compiler
* ARM 32 bit family Cortex A - Tested with GNU C++ Compiler
* AVR32 - Tested on GNU C++ Compiler

**Note**

The architecture should support a floating point numbers with fixed precision. Don't use ```constexpr``` in floating point types  because it will break the code and make the code non-portable , the reason for this is " The flaoting point precision is not fixed  across multiple architectures ".
