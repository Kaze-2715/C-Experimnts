#include <stdio.h>
#define N 10

int input(int array[], int len);
int change(int array[], int len);
int output(int array[], int len);

int main(void)
{
    int array[N];

    input(array, N);

    change(array, N);

    output(array, N);

    return 0;
}

int change(int array[], int len)
{
    int max, min, i_max, i_min, tmp;

    max = array[0];
    min = array[0];
    i_max = 0;
    i_min = 0;

    for (int i = 0; i < len; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
            i_max = i;
        }
        else if (array[i] < min)
        {
            min = array[i];
            i_min = i;
        }
        
        
    }

    array[i_min] = array[0];
    array[0] = min;

    array[i_max] = array[len - 1];
    array[len - 1] = max;

    return 0;
}

int input(int array[], int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("Element: ");
        scanf("%i", &array[i]);
    }

    return 0;
}

int output(int array[], int len)
{
    printf("After: ");
    for (int i = 0; i < N; i++)
    {
        printf("%i ", array[i]);
    }
    printf("\n");
    
    return 0;
}