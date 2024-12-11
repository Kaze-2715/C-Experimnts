#include <stdio.h>

int prime(int n);

int main(void)
{
    int n;
    printf("Value of n: ");
    scanf("%i", &n);

    prime(n);

    return 0;
}

int prime(int n)
{
    int arr[n];
    int count, sum;

    if (n < 2)
    {
        printf("No prime number, sum = 0.\n");
    }
    else if (n == 2)
    {
        printf("Prime number: 2, sum = 2.\n");
    }
    else
    {
        arr[0] = 2;
        count = 1;
        for (int i = 3; i <= n; i++)
        {
            int flag = 0;
            for (int j = 2; j < i; j++)
            {
                if (i % j == 0)
                {
                    flag = 1;
                    break;
                }
                
            }

            if (flag == 0)
            {
                arr[count] = i;
                count++;
            }
            
            
        }

        sum = 0;
        for (int i = 0; i < count; i++)
        {
            sum += arr[i];
        }

        printf("Prime number: ");
        for (int i = 0; i < count; i++)
        {
            printf("%i ", arr[i]);
        }
        printf("\n");
        printf("Sum: %i", sum);
    }

    return 0;
}