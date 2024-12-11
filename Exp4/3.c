#include <stdio.h>

int swap(int *a, int *b);

int main(void)
{
    int a, b;
    printf("Input a b: ");
    scanf("%i %i", &a, &b);

    swap(&a, &b);

    printf("a: %i\nb: %i\n", a, b);

    return 0;
}

int swap(int *a, int *b)
{
    int m = *a;
    *a = *b;
    *b = m;

    return 0;
}
