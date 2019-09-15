// The int scanf(const char *format, ...) function reads the input from the standard input stream
// stdin and scans that input according to the format provided.
//
// The int printf(const char *format, ...) function writes the output to the standard output stream
// stdout and produces the output according to the format provided.

#include <stdio.h>
int main( ) {

   char str[100];
   int i;

   printf( "Enter a value :");
   scanf("%s %d", str, &i);

   printf( "\nYou entered: %s %d ", str, i);

   return 0;
}
