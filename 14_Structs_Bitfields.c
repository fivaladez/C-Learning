#include <stdio.h>
#include <string.h>

// struct {
//    type [member_name] : width ;
// };

struct {
   unsigned int age : 3;
} Age;

int main( ) {

   Age.age = 4;
   printf( "Sizeof( Age ) : %d\n", sizeof(Age) );
   printf( "Age.age : %d\n", Age.age );

   Age.age = 7;
   printf( "Age.age : %d\n", Age.age );

   // It will be 0 due tu 8 exeeeds the number of bit used by "age"
   Age.age = 8;
   printf( "Age.age : %d\n", Age.age );

   return 0;
}
