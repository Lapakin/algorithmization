#include "stdio.h"

void printb(unsigned int value, short number_of_position) {
    number_of_position--;
    int bit_position;
    for (bit_position = number_of_position; bit_position >= 0; bit_position--)
        printf("%d", value >> bit_position & 1);
}


