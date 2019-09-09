// A storage class defines the scope (visibility) and life-time of variables and/or
// functions within a C Program. They precede the type that they modify. We have
// four different storage classes in a C program −
//
// - auto
// - register
// - static
// - extern
#include <stdio.h>

// The extern storage class is used to give a reference of a global variable that
// is visible to ALL the program files. When you use 'extern', the variable cannot be initialized
// however, it points the variable name at a storage location that has been previously defined.


// NOTE: compile the two files separadely -> $gcc main.c support.c

/* function declaration */
void func(void);
static int count = 5; /* global variable */

int count2 ;
extern void write_extern();

void main(){

    int mount;
    auto int month;

    register int  miles;

    while(count--) {
      func();
   }

   count2 = 5;
   write_extern();
}

/* function definition */
void func( void ) {

   static int i = 5; /* local static variable */
   i++;

   printf("i is %d and count is %d\n", i, count);
}
