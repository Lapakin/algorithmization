#include "my_func.h"

void display_bits(unsigned int value)
{
    const int max_position = 15;
    int bit_position;
    for (bit_position = max_position; bit_position >= 0; bit_position--)
        printf("%d", value >> bit_position & 1);
}


