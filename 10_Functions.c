// A function is a group of statements that together perform a task. Every C program has at least
// one function, which is main(), and all the most trivial programs can define additional functions.
//
// A function declaration tells the compiler about a function's name, return type, and parameters.
// A function definition provides the actual body of the function.
#include <stdio.h>

/* function declaration */
int max(int num1, int num2);
int max_p(int *num1, int *num2);

int main () {
   /* local variable definition */
   int a = 100;
   int b = 200;
   int ret;
   /* calling a function by value */
   ret = max(a, b);
   printf( "Max value is : %d\n", ret );
   /* calling a function by reference */
   ret = max_p(&a, &b);
   printf( "Max_p value is : %d\n", ret );

   return 0;
}

/* function definition */
int max(int num1, int num2) {
    //Ternary operator to return the bigger number of two passed
    int result = num1>num2 ? num1: num2;

    return result;
}

/* function definition */
int max_p(int *num1, int *num2) {
    //Ternary operator to return the bigger number of two passed
    int result = *num1>*num2 ? *num1: *num2;

    return result;
}

/*
NOTE: When you pass a variable to call a function, it is called argument
But, when you are in the definition of the function, that variable is called parameter
*/
