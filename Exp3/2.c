#include <stdio.h>

int main(void)
{
    float arr[5][5];
    float sum;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("Input: ");
            scanf("%f", &arr[i][j]);

            if ((i == j) || (i + j == 4))
            {
                sum += arr[i][j];
            }
        }
    }
    printf("Sum: %f", sum);

    return 0;
}