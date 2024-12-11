#include <stdio.h>
#include <string.h>

int draw(int length, int width, char c, char type[]);

int main(void)
{
    int l, w;
    char c;
    char type[5];
    printf("Length, width, char, type(rect or tri): ");
    scanf("%i, %i, %c, %s", &l, &w, &c, type);

    draw(l, w, c, type);

    return 0;
}

int draw(int length, int width, char c, char type[])
{
    if (strcmp(type, "rect") == 0)
    {
        for (int i = 0; i < length; i++)
        {
            printf("%c", c); //First Row
        }
        printf("\n");

        for (int i = 0; i < width - 2; i++)
        {
            printf("%c", c);

            for (int j = 0; j < length - 2; j++)
            {
                printf(" ");
            }

            printf("%c\n", c);
        }

        for (int i = 0; i < length; i++)
        {
            printf("%c", c); // Last Row
        }
        printf("\n");

        return 0;
    }
    else if (strcmp(type, "tri") == 0)
    {
        int step = (length - 2) / (width - 2);
        int output = 0;

        for (int i = 0; i < width - 1; i++)
        {
            printf("%c", c);
            for (int j = 0; j < output; j++)
            {
                printf("%c", c);
            }
            printf("\n");
            output += step;
        }

        for (int i = 0; i < length; i++)
        {
            printf("%c", c);
        }
        printf("\n");

        return 0;
    }
    else
    {
        printf("Wrong input.");
        return -1;
    }
}