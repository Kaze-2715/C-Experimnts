#include <stdio.h>
#include <math.h>

int main(void)
{
    int n, m, count, sum;
    printf("Max: ");
    scanf("%i", &n);
    int array[n];
    printf("Index: ");
    scanf("%i", &m);

    count = 0;
    if (n <= 1)
    {
        printf("No prime number. Sum = 0.\n");
    }
    else
    {
        printf("Prime number: ");
        for (int i = 2; i <= n; i++)
        {
            int flag = 0;
            for (int j = 2; j < i; j++)
            {
                if ((i % j) == 0)
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
            {
                printf("%i ", i);
                array[count] = i;
                count++;
            }
        }
        sum = 0;        
        for (int i = count - m; i < count; i++)
        {
            sum += array[i];
        }
        printf("\n");
        printf("Sum: %i", sum);
    }
    return 0;
}