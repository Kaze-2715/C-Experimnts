#include <stdio.h>

int main(void)
{
    int a = 4;
    int b = 5;

    int z = a & b;
    printf("a & b: %i\n", z);
    z = a | b;
    printf("a | b: %i\n", z);
    z = a ^ b;
    printf("a ^ b: %i\n", z);
    z = ~a;
    printf("~a: %i\n", z);
    z = ~b;
    printf("~b: %i\n", z);
    z = a << 2;
    printf("a << 2: %i\n", z);
    z = b << 2;
    printf("b << 2: %i\n", z);
    z = a >> 3;
    printf("a >> 3: %i\n", z);
    z = b >> 3;
    printf("a >> 3: %i\n", z);

    return 0;
}