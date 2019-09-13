#include <stdio.h>

int main () {

   int  *ptr = NULL;

   if(ptr)     /* succeeds if p is not null */
      printf("The value of ptr that is not Null is : %x\n", ptr  );

   if(!ptr)    /* succeeds if p is null */
      printf("The value of ptr that is Null is : %x\n", ptr  );

   return 0;
}
