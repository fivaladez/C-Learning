// C programming language assumes any non-zero and non-null values as true,
// and if it is either zero or null, then it is assumed as false value.

#include <stdio.h>


void main(void) {
    /* local variable definition */
    int a = 100;
    int b = 200;

    /* check the boolean condition */
    if( a ) {

       /* if condition is true then check the following */
       if( b ) {
          /* if condition is true then print the following */
          printf("Values of a and b are different of zero\n" );
       }
       else{
           /* if condition is false then print the following */
           printf("Value of a is different of zero but the value of b is equal to zero\n" );
       }
    }

    printf("Exact value of a is : %d\n", a );
    printf("Exact value of b is : %d\n", b );

}
