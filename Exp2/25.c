#include <stdio.h>

int main(void)
{
    int i = 1;
    int sum = 0;

    while (i <= 100)
    {
        sum += i;
        i++;
    }
    printf("Sum: %i\n", sum);

    sum = 0;
    i = 1;
    do
    {
        sum += i;
        i++;
    } while (i <= 100);
    printf("Sum: %i\n", sum);

    sum = 0;
    i = 1;
    for (i = 1; i <= 100; i++)
    {
        sum += i;
    }
    printf("Sum: %i\n", sum);

    sum = 0;
    i = 1;
    LOOP: 
    if (i <= 100)
    {
        sum += i;
        i++;
        goto LOOP;
    }
    printf("Sum: %i\n", sum);

    return 0;
}