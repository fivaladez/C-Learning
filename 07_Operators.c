// An operator is a symbol that tells the compiler to perform specific mathematical or logical functions.
// C language is rich in built-in operators and provides the following types of operators −
//
// - Arithmetic Operators: + - * / % ++ --
// - Relational Operators: == != > < >= <=
// - Logical Operators: && || !
// - Bitwise Operators: & | ^ ~ << >>
// - Assignment Operators: = += -= *= /= %= <<= >>= &= ^= |=
// - Misc Operators: sizeof() & * ?:
#include <stdio.h>


void main(void) {

    unsigned char a=4, b=3;// a = 0000 0100, b = 0000 0011
    float c=0;

    c = a + b;
    c = a - b;
    c = a / b;
    c = a * b;
    c = a>b ? a : b;
    c += a;
    c -= a;

    unsigned char d = 0;

    d = a | b; // c = 0000 0111 = 7
    printf("%d", d);
    d = a & b; // c = 0000 0000 = 0
    printf("%d", d);
    d = a << 1;// c = 0000 1000 = 8
    printf("%d", d);
    d = a >> 1;// c = 0000 0010 = 2
    printf("%d", d);

}
