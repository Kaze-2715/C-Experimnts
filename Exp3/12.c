#include <stdio.h>
#define N 10

int main(void)
{
    int count = 0;
    int sum = 0;
    float avg;
    int array[N];
    for (int i = 0; i < N; i++)
    {
        printf("Input: ");
        scanf("%i", &array[i]);
    }

    for (int i = 0; i < N; i++)
    {
        sum += array[i];
    }

    avg = (float)sum / N;

    for (int i = 0; i < N; i++)
    {
        if (array[i] > avg)
        {
            count++;
        }
        
    }

    printf("Average: %f, count: %i\n", avg, count);
    return 0;
}