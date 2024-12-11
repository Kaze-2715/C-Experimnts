#include <stdio.h>

int main(void)
{
    for (int i = 0; i < (4 - 1) * 2; i++)
    {
        printf(" ");
    }
    printf("3\n"); //µÚÒ»ÐÐ

    for (int i = 1; i < 4; i++)
    {
        for (int j = 0; j < (3 - i) * 2; j++)
        {
            printf(" ");
        }

        printf("3");
        
        for (int k = 0; k < 4 * i - 1; k++)
        {
            printf(" ");
        }
        printf("3\n");
    }

    for (int i = 2; i > 0; i--)
    {
        for (int j = 0; j < (3 - i) * 2; j++)
        {
            printf(" ");
        }
        printf("3");
        for (int k = 0; k < 4 * i - 1; k++)
        {
            printf(" ");
        }
        printf("3\n");
    }

    for (int i = 0; i < (4 - 1) * 2; i++)
    {
        printf(" ");
    }
    printf("3\n");

    return 0;
}
