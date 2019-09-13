// As you know, every variable is a memory location and every memory location has its address
// defined which can be accessed using ampersand (&) operator, which denotes an address in memory.

// What are Pointers?
// A pointer is a variable whose value is the address of another variable, i.e.,
// direct address of the memory location. Like any variable or constant, you must declare a
// pointer before using it to store any variable address.
// type *var-name;
#include <stdio.h>

int main () {

   int  var = 20;   /* actual variable declaration */
   int  *ip;        /* pointer variable declaration */

   ip = &var;  /* store address of var in pointer variable*/

   printf("Address of var variable: %x\n", &var  );

   /* address stored in pointer variable */
   printf("Address stored in ip variable: %x\n", ip );

   /* access the value using the pointer */
   printf("Value of *ip variable: %d\n", *ip );

   return 0;
}
