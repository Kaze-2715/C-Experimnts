#include <stdio.h>

int main(void)
{
    double a;
    printf("Input a decimal number: ");
    scanf("%lf", &a);

    int int_part = (int)a;
    double point_part = a - int_part;
    
    int i_part[16];
    int i = 0;
    do
    {
        int digit = int_part % 16;
        i_part[i] = digit;
        i++;
        int_part /= 16;
    } while (int_part != 0);
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%x", i_part[j]);
    }

    printf(".");

    for (int j = 0; j < 4; j++)
    {
        double x = point_part * 16;
        int digit = (int)x;
        printf("%x", digit);
        point_part = x - digit;
    }
    
    printf("\n");

    return 0;
}