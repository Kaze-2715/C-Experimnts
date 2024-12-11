#include <stdio.h>

int main(void)
{
    int row, column;
    int *ptr1 = NULL;
    int **ptr2 = NULL;
    printf("Row, column: ");
    scanf("%d, %d", &row, &column);

    int array[row][column];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("Element: ");
            scanf("%d", &array[i][j]);
        }
        
    }

    // *Method 1
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    // *Method 2
    for (int i = 0; i < row; i++)
    {
        ptr1 = array[i];
        for (int j = 0; j < column; j++)
        {
            ptr2 = &ptr1;
            printf("%d ", *(*ptr2 + j));
        }
        printf("\n");
    }
    return 0;
}