#include "stdio.h"
#include "my_func.h"

unsigned char c = 0;
int x = 0x52;
int y = 0x23;
int z;
int m = 18;

int main(void) {
    struct REGISTERS6x4 registers6x4;
    registers6x4.AL = 0x3;
    registers6x4.AH = 0x9;
    registers6x4.BL = 0x5;
    registers6x4.BH = 0x5;
    registers6x4.CL = registers6x4.AL & registers6x4.BL;
    registers6x4.CH = registers6x4.AH & registers6x4.BH;

    printf("AH_AL = %#X", registers6x4.AH);
    printf("%X\n", registers6x4.AL);
    printf("AH_AL = 0b");
    printb(registers6x4.AH, 4);
    printb(registers6x4.AL, 4);

    printf("\n\nsize of register file = %lu byte(s)\n", sizeof(registers6x4));

    printf("\nsizeof c = %lu bit(s)\n", sizeof(char) * 8);


    c = registers6x4.CH;
    c <<= 4;
    c |= registers6x4.CL;
    printf("\nc = 0b");
    printb(c, 8);

    registers6x4.BL = c;
    c >>= 4;
    registers6x4.BH = c;
    printf("\n\nBH_BL = 0b");
    printb(registers6x4.BH, 4);
    printb(registers6x4.BL, 4);

    printf("\n\nx = 0b");
    printb(x, 8);
    printf("\ny = 0b");
    printb(y, 8);
    z = x ^ y;
    printf("\nz = 0b");
    printb(z, 8);
    z ^= y;
    printf("\nz = 0b");
    printb(z, 8);

    z = x & m;
    printf("\n\nx = 0b");
    printb(x, 8);
    printf("\nm = 0b");
    printb(m, 8);
    printf("\nz = 0b");
    printb(z, 8);


    printf("\n\nx = 0b");
    printb(x, 8);
    printf("\ny = 0b");
    printb(y, 8);
    x ^= y;
    y ^= x;
    x ^= y;
    printf("\nx = 0b");
    printb(x, 8);
    printf("\ny = 0b");
    printb(y, 8);

    printf("\n\nx = 0b");
    printb(x, 8);
    m = 0x10;
    printf("\nm = 0b");
    printb(m, 8);
    x |= m;
    printf("\nx = 0b");
    printb(x, 8);

    printf("\n\nx = 0b");
    printb(x, 8);
    m = 0x10;
    printf("\nm = 0b");
    printb(m, 8);
    m = ~m;
    printf("\nm = 0b");
    printb(m, 8);
    x &= m;
    printf("\nx = 0b");
    printb(x, 8);

    printf("\n\nx = 0b");
    printb(x, 8);
    m = 0x17;
    printf("\nm = 0b");
    printb(m, 8);
    x ^= m;
    printf("\nx = 0b");
    printb(x, 8);

    printf("\n\nx = 0b");
    printb(x, 8);
    printf("\ny = 0b");
    printb(y, 8);
    z = x - y;
    printf("\nz = 0b");
    printb(z, 8);
    y = ~y + 1;
    printf("\ny = 0b");
    printb(y, 8);
    z = x + y;
    printf("\nz = 0b");
    printb(z, 8);
    return 0;
}
