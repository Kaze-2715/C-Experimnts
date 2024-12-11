#include <stdio.h>

int main(void)
{
    int arr[5][5] = {{1, 2, 3, 4, 5},
                     {1, 2, 3, 4, 5},
                     {1, 2, 3, 4, 5},
                     {1, 2, 3, 4, 5},
                     {1, 2, 3, 4, 5}};
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            int tmp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = tmp;
        }
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
