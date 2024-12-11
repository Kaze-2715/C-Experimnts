#include <stdio.h>

int main(void)
{
    int a = 4;
    int b = 5;

    int c = (a && b) ? (a | b) : (!a);

    printf("c: %i", c);
    return 0;
}