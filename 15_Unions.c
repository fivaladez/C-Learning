// A union is a special data type available in C that allows to store different data types
// in the same memory location. You can define a union with many members, but only one member
// can contain a value at any given time.

// union [union tag] {
//    member definition;
//    member definition;
//    ...
//    member definition;
// } [one or more union variables];

#include <stdio.h>
#include <string.h>

union Data {
   int i;
   float f;
   char str[20];
};

int main( ) {

   union Data data;
   // The memory occupied by a union will be large enough to hold the largest member of the union.
   printf( "Memory size occupied by data : %d\n", sizeof(data));

   data.i = 10;
   printf( "data.i : %d\n", data.i);

   data.f = 220.5;
   printf( "data.f : %f\n", data.f);

   strcpy( data.str, "C Programming");
   printf( "data.str : %s\n", data.str);

   return 0;
}
