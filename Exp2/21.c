#include <stdio.h>

int main(void)
{
    int a, b, z;
    a = 5;
    b = 7;

    z = (a++, ++b + a);

    printf("ÔËËã½á¹û£º%i", z);
}