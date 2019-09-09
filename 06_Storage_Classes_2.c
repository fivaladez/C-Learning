#include <stdio.h>

extern int count2;

void write_extern(void) {
   printf("count is %d\n", count2);
}

// 1- Stack
// The process Stack contains the temporary data such as method/function parameters,
// return address and local variables.
//
// 2- Heap
// This is dynamically allocated memory to a process during its run time.
//
// 3- Text
// This includes the current activity represented by the value of Program Counter and the
// contents of the processor's registers.
//
// 4- Data
// This section contains the global and static variables.
