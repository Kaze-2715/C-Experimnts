#include <stdio.h>

int main(void)
{
    char lower, upper;

    printf("Input a lowercase letter: ");
    scanf("%c", &lower);
    upper = lower - 32;

    printf("Uppercase: %c", upper);

    return 0;
}