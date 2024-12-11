#include <stdio.h>

int main(void)
{
    float a;
    double b;
    long double c;

    printf("Float a: ");
    scanf("%f", &a);
    printf("Double b: ");
    scanf("%lf", &b);
    printf("Long double c: ");
    scanf("%Lf", &c);

    printf("Dec: %f, exp: %e\n", a, a);
    printf("Dec: %lf, exp: %le\n", b, b);
    printf("Dec: %Lf, exp: %Le\n", c, c);

    return 0;
}