// Integer Literals
// An integer literal can be a decimal, octal, or hexadecimal constant.
// A prefix specifies the base or radix: 0x or 0X for hexadecimal, 0 for octal, and nothing for decimal.
//
// An integer literal can also have a suffix that is a combination of U and L, for unsigned
// and long, respectively. The suffix can be uppercase or lowercase and can be in any order.
#define NUMBER_1    0xFA3l
#define NUMBER_2    077u
const int number_3 = 212;
const float number_4 = 3.1416;
const float number_5 = 3.1416E-5l;

// A floating-point literal has an integer part, a decimal point, a fractional part,
// and an exponent part.
// You can represent floating point literals either in decimal form or exponential form.
#include <stdio.h>

void main() {

    int area;

    area = NUMBER_1 * NUMBER_2;
    printf("value of area : %d\n\t", area);
    printf("%d", number_5);


}
