#include <stdio.h>

int main(void)
{
    int x = 20;
    int y = 11;
    int z1, z2;

    z1 = (x++) + (x++);
    z2 = (++y) + (++y);
    y *= x + 2;

    printf("z1: %i\nz2: %i\ny: %i", z1, z2, y);
    return 0;
}