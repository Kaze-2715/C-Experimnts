#include <stdio.h>

int get_matrix(int row, int column, int array[row][column]);
int diagonal(int row, int column, int array[row][column]);

int main(void)
{
    int row, column, sum;
    sum = 0;
    printf("Row, column: ");
    scanf("%d, %d", &row, &column);
    int array[row][column];

    get_matrix(row, column, array);

    sum = diagonal(row, column, array);

    printf("Sum is %d\n", sum);

    return 0;
}

int get_matrix(int row, int column, int array[row][column])
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("Element: ");
            scanf("%d", &array[i][j]);
        }
        
    }
    return 0;
}

int diagonal(int row, int column, int array[row][column])
{
    int i, j, sum;

    i = 0;
    j = 0;
    sum = 0;

    while ((i < row) && (j < column))
    {
        sum += array[i][j];
        i++;
        j++;
    }

    return sum;
}