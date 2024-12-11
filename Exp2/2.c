#include <stdio.h>
int main(void)
{
    const double pi = 3.1415;
    float r, S, C;

    printf("Radium: ");
    scanf("%f", &r);

    S = pi * r * r;
    C = 2 * pi * r;

    printf("Area: %.2f\n", S);
    printf("Circumference: %.2f\n", C);

    return 0;
}