#include "stdio.h"

int main() {
    int b = 2;
    float c = 2.88;
    int i, n = 5;
    for (i = 1; i < n; i++) {
        c += i;
        b += i;
        printf("c=%f, b=%d\n", c, b);
    }
    return 0;
}

