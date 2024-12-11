#include <stdio.h>

int main(void)
{
    int x = 11;
    int y = (x > 9) ? 100 : 200;

    printf("y: %i\n", y);

    if (x > 9)
    {
        y = 100;
    }
    else
    {
        y = 200;
    }

    printf("y: %i\n", y);
}