#include <stdio.h>

int main(void)
{
    int a, b;
    int *pmax, *pmin, *pt;

    printf("Input two integers: ");
    scanf("%d %d", &a, &b);

    pmax = &a;
    pmin = &b;

    if (*pmax < *pmin)
    {
        pmax = &b;
        pmin = &a;
    }

    printf("Max: %d, min: %d", *pmax, *pmin);

    return 0;
}