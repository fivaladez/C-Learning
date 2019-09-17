// C programming does not provide direct support for error handling but being a system programming language,
// it provides you access at lower level in the form of return values. Most of the C or even Unix function
// calls return -1 or NULL in case of any error and set an error code errno.
//
// You can find various error codes defined in <error.h> header file.

// The perror() function displays the string you pass to it, followed by a colon, a space, and
// then the textual representation of the current errno value.
//
// The strerror() function, which returns a pointer to the textual representation of the current errno value.

#include <stdio.h>
#include <errno.h>
#include <string.h>

extern int errno ;

int main () {

   FILE * pf;
   int errnum;
   pf = fopen ("unexist.txt", "rb");

   if (pf == NULL) {
      errnum = errno;
      fprintf(stderr, "Value of errno: %d\n", errno);
      perror("Error printed by perror");
      fprintf(stderr, "Error opening file: %s\n", strerror( errnum ));
   } else {

      fclose (pf);
   }

   return 0;
}
