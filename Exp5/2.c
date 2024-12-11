#include <stdio.h>

int main(void)
{
    int a, b;
    printf("Input two integers: ");
    scanf("%d %d", &a, &b);

    printf("Before: %d", b);

    float *ptr = (float *)&a;
    b = *ptr;

    printf("After: %d", b);

    return 0;
}