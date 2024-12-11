#include <stdio.h>

int main(void)
{
    int x, y;
    printf("x = ");
    scanf("%i", &x);
    if (x < 1)
    {
        printf("y = %i", x);
    }
    else if ((x >= 1) && (x < 10))
    {
        printf("y = %i", x * 2 - 1);
    }
    else if (x >= 10)
    {
        printf("y = %i", x * 3 - 11);
    }

    return 0;
}