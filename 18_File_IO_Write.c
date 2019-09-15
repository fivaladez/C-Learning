// You can use the fopen( ) function to create a new file or to open an existing file. This call will
// initialize an object of the type FILE, which contains all the information necessary to control the stream.
// The prototype of this function call is as follows −
//     FILE *fopen( const char * filename, const char * mode );

//  r   Opens an existing text file for reading purpose.
//
//   w   Opens a text file for writing. If it does not exist, then a new file is created.
// Here your program will start writing content from the beginning of the file.
//
//   a   Opens a text file for writing in appending mode. If it does not exist, then a new file is created.
// Here your program will start appending content in the existing file content.
//
//   r+  Opens a text file for both reading and writing.
//
//   w+  Opens a text file for both reading and writing. It first truncates the file to zero length
// if it exists, otherwise creates a file if it does not exist.
//
//  a+  Opens a text file for both reading and writing. It creates the file if it does not exist.
// The reading will start from the beginning but writing can only be appended.


#include <stdio.h>

void main() {
   FILE *fp;

   fp = fopen("test.txt", "w+");

    // fprintf(FILE *fp,const char *format, ...)
   fprintf(fp, "fprintf test...\n");

   // int fputs( const char *s, FILE *fp );
   // The function fputs() writes the string s to the output stream referenced by fp.
   // It returns a non-negative value on success, otherwise EOF is returned in case of any error.
   fputs("fputs test...\n", fp);

   // int fputc( int c, FILE *fp ); to write a single character
   // The function fputc() writes the character value of the argument c to the output stream referenced by fp.
   //  It returns the written character written on success otherwise EOF if there is an error.
   fputc('5', fp);

   // int fclose( FILE *fp );
   fclose(fp);
}
