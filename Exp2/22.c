#include <stdio.h>

int main(void)
{
    char a = 'A';
    char *p = &a;
    char b = (int)*p;

    printf("b: %c", b);
    return 0;
}