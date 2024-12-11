#include <stdio.h>

int main(void)
{
    int n;
    printf("Length: ");
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        printf("Element: ");
        scanf("%d", &array[i]);
    }

    printf("Array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    printf("Array: ");
    int *ptr1 = array;
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ptr1[i]);
    }
    printf("\n");

    printf("Array: ");
    ptr1 = array;
    int **ptr2 = &ptr1;
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ptr2[0][i]);
    }
    printf("\n");

    return 0;
}