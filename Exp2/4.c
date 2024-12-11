#include <stdio.h>

int main(void)
{
    int a, b, sum;
    printf("a: ");
    scanf("%i", &a);
    printf("b: ");
    scanf("%i", &b);

    sum = a + b;
    printf("Sum: %i", sum);

    return 0;
}