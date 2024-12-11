#include <stdio.h>

int integer(int n);
int dot(double part, int length);

int main(void)
// Turn a decimal number to hexadecimal number.
{
    double n, d_part;
    int i_part, length;
    //'length' is the length of decimal part.
    printf("Input a decimal number and its length of decimal part: ");
    scanf("%lf %d", &n, &length);

    i_part = (int)n;
    d_part = n - i_part;

    integer(i_part);
    printf(".");
    dot(d_part, length);

    return 0;
}

int integer(int n)
{
    if (n < 0)
    {
        printf("error\n");
        return 0;
    }
    else if ((n >= 0) || (n < 16))
    {
        printf("%x", n);
        return 0;
    }
    else if (n >= 16)
    {
        printf("%x", n % 16);
        return integer(n / 16);
    }
}

int dot(double part, int length)
{
    int digit;

    if (length <= 0)
    {
        return 0;
    }
    else
    {
        digit = (int)(part * 16);
        part = part * 16 - digit;
        printf("%x", digit);
        return dot(part, --length);
    }
    
}