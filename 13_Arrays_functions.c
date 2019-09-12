 // === Passing Arrays as function parameters ===
 //
 //    There are 3 ways:
 //    - As a pointer:     void myFunction(int *param, int size){}
 //    - As sized array:   void myFunction(int param[5]){}
 //    - As unsized array: void myFunction(int param[], int size){}

 // === Return Arrays from functions ===
 //
 //    There are only one way to do it:
 //    - Return a pointer to the array: int * myFunction() {}
 //      Also, the arrays MUST be STATIC to have a defined memory alocation to pass


#include <stdio.h>

/*Declaration of functions*/
void myFunction1( int* param, int size );
void myFunction2( int param[5] );
void myFunction3( int param[], int size );

int * myFunction();

void main () {

    int myArray[5] = {0,1,2,3,4};
    int i, j;

    for( i = 0; 5 > i; i++ )
        printf("myArray[%d] = %d\n", i, myArray[i] );

 // === Passing Arrays as function parameters ===
    myFunction1( &myArray[0], 5 );
    myFunction2( myArray );
    myFunction3( myArray , 5);
// === Return Arrays from functions ===
    int *p;
    p = myFunction();
    for ( i = 0; i < 3; i++ )
        printf( "*(p + %d) : %d\n", i, *(p + i));

}

/*Definition of functions*/
void myFunction1( int* param, int size ){
    for(int i = 0; size > i; i++)
        printf("    In function 1 the array[%i] is %i\n    ======    \n", i, *(param + i) );
}
void myFunction2( int param[5] ){
    int i;
    for(int i = 0; 5 > i; i++)
        printf("    In function 2 the array[%i] is %i\n    ======    \n", i, param[i] );
}
void myFunction3( int param[], int size ){
    int i;
    for(int i = 0; size > i; i++)
        printf("    In function 3 the array[%i] is %i\n    ======    \n", i, param[i] );
}
int * myFunction() {
    static int myArrayReturn[3] = {5,7,9};
    // Returns the memory direction of the array
    return myArrayReturn;
    // Pass the name of a function is equivalent to pass its address
}
