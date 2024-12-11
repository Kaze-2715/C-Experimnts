#include <stdio.h>

int found_max(int[], int);

int main(void)
{
    int n, index, max;
    printf("Length: ");
    scanf("%i", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Element: ");
        scanf("%i", &arr[i]);
    }

    index = 0;

    max = found_max(arr, index);

    printf("Max of the first 3 numbers: %i", max);

    return 0;
}

int found_max(int arrar[], int index)
{
    int a, b, c, max;

    a = arrar[index];
    b = arrar[index + 1];
    c = arrar[index + 2];
    max = a;
    for (int i = index + 1; i <= index + 2; i++)
    {
        if (max < arrar[i])
        {
            max = arrar[i];
        }
        
    }

    return max;
}