#include <stdio.h>

int main(void)
{
    int n, max, index;
    printf("Amount: ");
    scanf("%i", &n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        printf("Input: ");
        scanf("%i", &array[i]);
    }

    max = array[0];
    index = 0;
    for (int i = 0; i < n; i++)
    {
        if (max < array[i])
        {
            max = array[i];
            index = i;
        }
        
    }
    printf("Index of maximum: %i", index);

    return 0;
}