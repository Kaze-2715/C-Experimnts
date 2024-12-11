#include <stdio.h>
int swap(int a, int b);

int main(void)
{
    int a1, a2;
    printf("Before: ");
    scanf("%i %i", &a1, &a2);

    swap(a1, a2);

    return 0;
}

int swap(int a, int b)
{
    printf("Before: %i, %i\n", a, b);
    int tmp = a;
    a = b;
    b = tmp;
    printf("After: %i, %i\n", a, b);

    return 0;
}