#include <stdio.h>


int main(void)
{
    int n;
    float sum, average;
    printf("Length: ");
    scanf("%i", &n);
    float array[n];

    for (int i = 0; i < n; i++)
    {
        printf("Input: ");
        scanf("%f", &array[i]);
        sum += array[i];
    }

    average = sum / n;

    printf("Sum: %f\nAverage: %f\n", sum, average);
    return 0;
}