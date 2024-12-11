#include <stdio.h>

int main(void)
{
    int n, *ptr;
    printf("Length: ");
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        printf("Element: ");
        scanf("%d", &array[i]);
    }

    printf("Array: ");
    for (ptr = array; ptr < (array + n); *ptr++)
    {
        printf("%d ", *ptr);        
    }

    printf("Value: %d", *(ptr - 3));

    return 0;
}