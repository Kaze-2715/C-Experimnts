#include <stdio.h>

int main(void)
{
    int row, column, count, *ptr;
    printf("Row, column: ");
    scanf("%d, %d", &row, &column);
    int array[row][column];
    ptr = &array[0][0];

    count = row * column;

    for (int i = 0; i < count; i++)
    {
        printf("Element: ");
        scanf("%d", ptr);
        ptr++;
    }

    ptr = &array[0][0];
    printf("Array: ");
    for (int i = 0; i < count; i++)
    {
        printf("%d ", *ptr);
        ptr++;
    }

    return 0;
}