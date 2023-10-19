#include "my_func.h"

int a = 154;
int b = 82;
int c = 81;

int main(void) {
    printf("a = 0x%04X\ta = %6d\ta = ", a, a); display_bits(a); printf("\n");
    printf("b = 0x%04X\tb = %6d\tb = ", b, b); display_bits(b); printf("\n");

    c = a ^ b;
    c = a | b;
    c = a ^ b;
    c = a + b;
    c = a - b;
    c = a * b;
    c = a / b;
    c = a >> 1;
    c = a << 2;
    c = ~ a;
    c = a ++;
    c = ++ b;
    c --;
    c = a % b;
    c += a;
    printf("\nc = 0b"); display_bits(c);
    printf(" c = 0x%X\tc = %6d\n", c, c);

    return 0;
}

