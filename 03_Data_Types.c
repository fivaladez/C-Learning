// Data types in c refer to an extensive system used for declaring variables or functions
// of different types. The type of a variable determines how much space it occupies
// in storage and how the bit pattern stored is interpreted.
//
// The types in C can be classified as follows −
//
//
// 1- Basic Types
//     They are arithmetic types and are further classified into: (a) integer types
//     and (b) floating-point types.
//
// 2- Enumerated types
//     They are again arithmetic types and they are used to define variables that can only
//     assign certain discrete integer values throughout the program.
//
// 3- The type void
//     The type specifier void indicates that no value is available.
//
// 4- Derived types
//     They include (a) Pointer types, (b) Array types, (c) Structure types,
//     (d) Union types and (e) Function types.
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

void main(int argc, char** argv) {

    printf("Unsigneed Char bytes    :   %d\n", sizeof(unsigned char));
    printf("Unsigneed Int bytes     :   %d\n", sizeof(unsigned int));
    printf("Unsigneed Short bytes   :   %d\n", sizeof(unsigned short));

    printf("Float bytes             :   %d\n", sizeof(float));
    printf("Double bytes            :   %d\n", sizeof(double));

}
