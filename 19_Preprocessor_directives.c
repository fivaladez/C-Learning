// The C Preprocessor is not a part of the compiler, but is a separate step in the compilation process.
// In simple terms, a C Preprocessor is just a text substitution tool and it instructs the compiler
// to do required pre-processing before the actual compilation.

// #define  - Substitutes a preprocessor macro.
// #include - Inserts a particular header from another file.
// #undef   - Undefines a preprocessor macro.
// #ifdef   - Returns true if this macro is defined.
// #ifndef  - Returns true if this macro is not defined.
// #if      - Tests if a compile time condition is true.
// #else    - The alternative for #if.
// #elif    - #else and #if in one statement.
// #endif   - Ends preprocessor conditional.
// #error   - Prints error message on stderr.
// #pragma  - Issues special commands to the compiler, using a standardized method.
#include <stdio.h>

// #include <file>
// This form is used for system header files. It searches for a file named 'file'
// in a standard list of system directories.
//
// #include "file"
// This form is used for header files of your own program. It searches for a file named 'file'
// in the directory containing the current file.

#define MAX_ARRAY_LENGTH 20

#undef  FILE_SIZE
#define FILE_SIZE 42

#ifndef MESSAGE
   #define MESSAGE "You wish!"
#endif

#ifdef DEBUG
   /* Your debugging statements here */
#endif

void main() {
    // Predefined Macros
    printf("File :%s\n", __FILE__ );
    printf("Date :%s\n", __DATE__ );
    printf("Time :%s\n", __TIME__ );
    printf("Line :%d\n", __LINE__ );
    printf("ANSI :%d\n", __STDC__ );

}
