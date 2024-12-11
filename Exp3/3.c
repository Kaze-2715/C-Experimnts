#include <stdio.h>

int main(void)
{
    const int n = 3;

    float arr[n][n];
    float (*p)[] = arr;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Input: ");
            scanf("%f", &arr[i][j]);
        }
    }

    printf("Address of array: %p\n", arr);
    printf("Address of array: %p\n", &arr);
    printf("Address of array: %p\n", &arr[0]);
    printf("Address of array: %p\n", p);

    printf("Address of lines of array:\nLine 1: %p\nLine 2: %p\nLine 3: %p\n", &arr[0], &arr[1], &arr[2]);
    printf("Address of lines of array:\nLine 1: %p\nLine 2: %p\nLine 3: %p\n", arr, (arr + 1), (arr + 2));
    printf("Address of lines of array:\nLine 1: %p\nLine 2: %p\nLine 3: %p\n", arr[0], arr[1], arr[2]);
}
