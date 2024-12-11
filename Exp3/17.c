#include <stdio.h>

int main(void)
{
    int n, num, count;
    printf("Length: ");
    scanf("%i", &n);
    int array[n];

    for (int i = 0; i < n; i++)
    {
        printf("Input: ");
        scanf("%i", &array[i]);
    }

    printf("Num: ");
    scanf("%i", &num);

    count = 0;
    for (int i = 0; i < n; i++)
    {
        if (num == array[i])
        {
            count++;
        }
        
    }
    printf("%i", count);
    return 0;
}