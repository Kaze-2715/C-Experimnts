#include <stdio.h>

int found_max(int[], int);

int main(void)
{
    int n, idx;
    printf("Length: ");
    scanf("%i", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Element: ");
        scanf("%i", &arr[i]);
    }

    idx = found_max(arr, n);

    printf("Index: %i", idx);

    return 0;
}

int found_max(int array[], int len)
{
    int max, idx;

    max = array[0];
    idx = 0;

    for (int i = 0; i < len; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
            idx = i;
        }
        
    }

    return idx;
}