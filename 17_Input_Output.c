// When we say Input, it means to feed some data into a program.
// When we say Output, it means to display some data on screen, printer, or in any file.

// Standard input	stdin	Keyboard
// Standard output	stdout	Screen
// Standard error	stderr	Your screen

// The "int getchar(void)" function reads the next available character from the screen and returns it as an integer.
// The "int putchar(int c)" function puts the passed character on the screen and returns the same character.

#include <stdio.h>
int main( ) {

   int c;

   printf( "Enter a value :");
   c = getchar( );

   printf( "\nYou entered: ");
   putchar( c );

   return 0;
}
