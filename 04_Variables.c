// A variable is nothing but a name given to a storage area that our programs can manipulate.
// Each variable in C has a specific type, which determines the size and layout of the
// variable's memory; the range of values that can be stored within that memory; and the
// set of operations that can be applied to the variable.

// Variable Definition in C
// A variable definition tells the compiler where and how much storage to create for the variable.
// type variable_list;

// Variable Declaration in C
// A variable declaration provides assurance to the compiler that there exists a variable
// with the given type and name so that the compiler can proceed for further compilation
// without requiring the complete detail about the variable.
#include <stdio.h>

// Variable declaration:
extern int a, b;
extern int c;
extern float f;
// function declaration
int func();

void main () {

   /* variable definition: */
   int a, b;
   int c;
   float f;

   /* actual initialization */
   a = 10;
   b = 20;

   c = a + b;
   printf("value of c : %d \n", c);

   f = 70.0/3.0;
   printf("value of f : %f \n", f);

   // function call
   int i = func();
   printf("value of i : %i \n", i);

}

// function definition
int func() {
   return 2;
}
