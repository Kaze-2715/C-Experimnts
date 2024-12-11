#include <stdio.h>

int sym(int length, int width, int before[length][width], int after[width][length]);

int main(void)
{
    int l, w;
    printf("Length, width: ");
    scanf("%i, %i", &l, &w);

    int before[w][l];
    int after[l][w];

    for (int i = 0; i < w; i++)
    {
        for (int j = 0; j < l; j++)
        {
            printf("Element: ");
            scanf("%i", &before[i][j]);
        }
    }

    for (int i = 0; i < w; i++)
    {
        for (int j = 0; j < l; j++)
        {
            printf("%i", before[i][j]);
        }
        printf("\n");
    }

    sym(l, w, after, before);

    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < w; j++)
        {
            printf("%i", after[i][j]);
        }
        printf("\n");
    }

    return 0;
}

int sym(int length, int width, int after[length][width], int before[width][length])
{
    for (int i = 0; i < width; i++)
    {
        for (int j = 0; j < length; j++)
        {
            after[j][i] = before[i][j];
        }
    }
    return 0;
}