// C programming language assumes any non-zero and non-null values as true,
// and if it is either zero or null, then it is assumed as false value.

#include <stdio.h>


void main(void) {
    /* local variable definition */
    int a = 100;
    int b = 200;

    switch(a) {

       case 100:
          printf("This is part of outer switch\n", a );

          switch(b) {
             case 200:
                printf("This is part of inner switch\n", a );
                // No need to use reserved word "break" because there are not more cases then
          }
        break;
        default:
            printf("This is default part of outer switch\n", a );
        // Word "break" is not necesarry for default value when it comes at the end of the switch
    }

    printf("Exact value of a is : %d\n", a );
    printf("Exact value of b is : %d\n", b );

}
