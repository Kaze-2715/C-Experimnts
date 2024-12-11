#include <stdio.h>

int main(void)
{
    int a, b, c;
    printf("a, b, c: ");
    scanf("%i,%i,%i", &a, &b, &c);
    
    int max = a;
    if (max < b)
    {
        max = b;
    }
    if (max < c)
    {
        max = c;
    }
    
    printf("Max: %i", max);
    return 0;
}