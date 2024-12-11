#include <stdio.h>

int main(void)
{
    int n, min, index, tmp;
    printf("Amount: ");
    scanf("%i", &n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        printf("Input: ");
        scanf("%i", &array[i]);
    }


    for (int i = 0; i < n - 1; i++)
    {
        min = array[i];
        index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (array[j] < min)
            {
                index = j;
                min = array[j];
            }
        }
        array[index] = array[i];
        array[i] = min;
    }

    printf("After: ");
    for (int i = 0; i < n; i++)
    {
        printf("%i ", array[i]);
    }

    printf("\n");

    return 0;
}