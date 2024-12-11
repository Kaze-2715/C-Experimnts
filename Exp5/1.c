#include <stdio.h>

int main(void)
{
    int n;
    char c;
    printf("Input an integer, a char: ");
    scanf("%i %c", &n, &c);

    printf("Address: %p, value: %d\n", &n, n);
    printf("Address: %p, value: %c\n", &c, c);

    return 0;
}