#include <stdio.h>

int main(void)
{
    int integer;
    short short_integer;
    unsigned int u_int;
    long long_int;
    unsigned long u_long_int;

    printf("Input an integer: ");
    scanf("%d", &integer);
    printf("Input a short integer: ");
    scanf("%hd", &short_integer);
    printf("Input an unsigned int: ");
    scanf("%u", &u_int);
    printf("Input a long integer: ");
    scanf("%ld", &long_int);
    printf("Input an unsigned long int: ");
    scanf("%lu", &u_long_int);

    printf("Integer: %d\n", integer);
    printf("Short integer: %hd\n", short_integer);
    printf("Unsigned integer: %u\n", u_int);
    printf("Long integer: %ld\n", long_int);
    printf("Unsigned long integer: %lu\n", u_long_int);

    return 0;
}