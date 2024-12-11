#include <stdio.h>

int main(void)
{
    int row, column;
    printf("Row, column: ");
    scanf("%d, %d", &row, &column);
    int array[row][column];

    printf("Address: %p, size: %i", &array, sizeof(array));

    return 0;
}