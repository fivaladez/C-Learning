#include <stdio.h>

int main () {
   // Array with 5 elements
   float balance[5] = {100.0, 2.0, 3.4, 17.0, 50.0};
   float *p;
   int i;

   p = balance;

   // Output each array element's value
   printf( "Array values using pointer\n");

   for ( i = 0; i < 5; i++ )
      printf("*(p + %d) : %.2f\n",  i, *(p + i) );

   printf( "Array values using balance as address\n");

   for ( i = 0; i < 5; i++ )
      printf("*(balance + %d) : %.2f\n",  i, *(balance + i) );

   return 0;
}
