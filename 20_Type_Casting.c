// Type casting is a way to convert a variable from one data type to another data type.

#include <stdio.h>

void main() {

   int sum = 17, count = 5;
   double mean;

   mean = (double) sum / count;
   printf("Value of mean : %f\n", mean );

   // Integer Promotion
   int  i = 17;
   char c = 'c'; /* ascii value is 99 */
   int sum_2;

   sum_2 = i + c;
   printf("Value of sum : %d\n", sum_2 );
}
