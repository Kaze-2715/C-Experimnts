#include <stdio.h>

int power(double n);

int main(void)
{
    double a;
    printf("Input: ");
    scanf("%lf", &a);

    power(a);

    return 0;
}

int power(double n)
{
    double base = n;
    int expo = 0;

    if (base >= 1.00)
    {
        while (base >= 10.00)
        {
            base /= 10;
            expo++;
        }
    }
    else
    {
        while (base < 1.00)
        {
            base *= 10;
            expo--;
        }
    }

    printf("%lf * 10^%i", base, expo);

    return 0;
}