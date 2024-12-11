#include <stdio.h>

int main(void)
{
    char c1;
    int c2;

    printf("Char 1: ");
    scanf("%c", &c1);
    printf("Char 2: ");
    scanf("%i", &c2);

    printf("Char: %c, ASCII: %i\n", c1, c1);
    printf("Char: %c, ASCII: %i\n", c2, c2);

    return 0;
}