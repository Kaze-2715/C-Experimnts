#include <stdio.h>

int main(void)
{
    int row, column;
    printf("Row, column: ");
    scanf("%d, %d", &row, &column);
    int array[row][column];

    printf("Address of array: %p\n", array);

    printf("Address of rows: ");
    for (int i = 0; i < row; i++)
    {
        printf("%p\n", &array[i][0]);
    }

    printf("Address of columns: ");
    for (int i = 0; i < column; i++)
    {
        printf("%p\n", &array[0][i]);
    }

    printf("Total length: %d", sizeof(array[0]));

    return 0;
}