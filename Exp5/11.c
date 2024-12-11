#include <stdio.h>

int get_matrix(int array[], int len);
int diagonal(int row, int column, int array[]);

int main(void)
{
    int row, column, count, sum;
    printf("Row, column: ");
    scanf("%d, %d", &row, &column);
    int array[row][column];
    count = row * column;
    int input[count];

    get_matrix(input, count);

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            array[i][j] = input[i * column + j];
        }
        
    }

    sum = diagonal(row, column, input);

    printf("Sum is %d.\n", sum);
    return 0;
}

int get_matrix(int array[], int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("Element: ");
        scanf("%d", &array[i]);
    }

    return 0;
}

int diagonal(int row, int column, int array[])
{
    int i, j, sum;

    i = 0;
    j = 0;
    sum = 0;

    while ((i < row) && (j < column))
    {
        sum += array[i * column + j];
        i++;
        j++;
    }

    return sum;
}
