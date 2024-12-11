#include <stdio.h>

int factorial(int n);

int main(void)
{
    int n, fn;
    printf("Value of n: ");
    scanf("%i", &n);

    if (n < 1)
    {
        printf("N should greater than 0.\n");
    }

    fn = factorial(n);
    printf("Factorial of n: %i\n", fn);

    return 0;
}

int factorial(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}
