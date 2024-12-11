#include <stdio.h>

int main(void)
{
    int ch1 = 0;
    int ch2 = 0;
    float f1 = 0.0;
    float f2 = 0.0;

    ch2 = ch1 + 'a';
    f2 = ch1 + f1;

    printf("Result: %i, %f\n", ch2, f2);

    return 0;
}