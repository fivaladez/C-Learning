#include <stdio.h>

void main() {

   FILE *fp;
   char buff[255];

   fp = fopen("test.txt", "r");

   // int fscanf(FILE *fp, const char *format, ...)
   fscanf(fp, "%s", buff);

   printf("1 : %s\n", buff );

   // char *fgets( char *buf, int n, FILE *fp );
   // The functions fgets() reads up to n-1 characters from the input stream referenced by fp.
   // It copies the read string into the buffer buf, appending a null character to terminate the string.

   fgets(buff, 255, (FILE*)fp);
   printf("2: %s\n", buff );

   fgets(buff, 255, (FILE*)fp);
   printf("3: %s\n", buff );

   // int fgetc( FILE * fp ); for a single character
   // The fgetc() function reads a character from the input file referenced by fp.
   // The return value is the character read, or in case of any error, it returns EOF.
   printf("%i", fgetc(fp));

   fclose(fp);

}
