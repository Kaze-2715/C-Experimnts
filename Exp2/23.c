#include <stdio.h>

int main(void)
{
    int a = 2;

    a %= 4 - 1;
    printf("a: %i\n", a);
    a += a *= a -= a *= 3;
    printf("a: %i\n", a);

    return 0;
}