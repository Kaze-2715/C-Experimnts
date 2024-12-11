#include <stdio.h>

int sort(int array[], int len);

int main(void)
{
    int n;
    printf("Length: ");
    scanf("%i", &n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        printf("Element: ");
        scanf("%i", &array[i]);
    }

    sort(array, n);

    for (int i = 0; i < n; i++)
    {
        printf("%i ", array[i]);
    }
    printf("\n");

    return 0;
}

int sort(int array[], int len)
{
    int index, min;
    for (int i = 0; i < len; i++)
    {
        index = i;
        min = array[i];
        for (int j = i + 1; j < len; j++)
        {
            if (min > array[j])
            {
                min = array[j];
                index = j;
            }
        }
        array[index] = array[i];
        array[i] = min;
    }

    return 0;
}
