#include <stdio.h>

int main(void)
{
    printf("Size of short int: %i\n", sizeof(short));
    printf("Size of int: %i\n", sizeof(int));
    printf("Size of long int: %i\n", sizeof(long));
    printf("Size of char: %i\n", sizeof(char));
    printf("Size of float: %i\n", sizeof(float));
    printf("Size of double: %i\n", sizeof(double));
    printf("Size of long double: %i\n", sizeof(long double));

    return 0;
}