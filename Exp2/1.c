#include <stdio.h>

#define PI 3.1415

int main(void)
{
    float r, S, C;
    printf("Radium: ");
    scanf("%f", &r);
    
    S = PI * r * r;
    C = 2 * PI * r;
    
    printf("Area: %.2f\n", S);
    printf("Circumference: %.2f\n", C);

    return 0;
}