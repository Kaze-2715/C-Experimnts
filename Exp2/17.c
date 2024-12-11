#include <stdio.h>
#include <complex.h>

int main(void)
{
    double _Complex a = 1 + 2 * I;
    double _Complex b = a + (2 + 3 * I);

    printf("%lf + %lfi", creal(b), cimag(b));
    return 0;
}