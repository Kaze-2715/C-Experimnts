#include <stdio.h>

int main(void)
{
    float C, F;
    printf("Celsius: ");
    scanf("%f", &C);

    F = 32 + C * 1.8;
    printf("Fahrenheit: %.2f\n", F);

    return 0;
}