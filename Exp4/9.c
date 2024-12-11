#include <stdio.h>

int move(int array[], int len, int offset);

int main(void)
{
    int n, m;
    printf("Value of n, m: ");
    scanf("%i, %i", &n, &m);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Element: ");
        scanf("%i", &arr[i]);
    }

    move(arr, n, m);

    printf("After: ");
    for (int i = 0; i < n; i++)
    {
        printf("%i ", arr[i]);
    }
    printf("\n");
}

int move(int array[], int len, int offset)
{
    int idx = len - offset;
    int off[offset];
    int ori[idx];

    for (int i = 0; i < idx; i++)
    {
        ori[i] = array[i];
    }
    
    for (int i = idx; i < len; i++)
    {
        off[i - (idx)] = array[i];
    }

    for (int i = 0; i < offset; i++)
    {
        array[i] = off[i];
    }

    for (int i = offset; i < len; i++)
    {
        array[i] = ori[i - offset];
    }

    return 0;
}