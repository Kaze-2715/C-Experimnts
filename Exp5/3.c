#include <stdio.h>

int main(void)
{
    int a;
    int *ptr = &a;

    printf("Input an integer: ");
    scanf("%d", &a);

    printf("Value: %d %p %d.\n", a, ptr, *ptr);

    printf("Input another integer: ");
    scanf("%d", &a);

    printf("Value: %d %p %d.\n", a, ptr, *ptr);

    printf("Input the third integer: ");
    scanf("%d", ptr);
    
    printf("Value: %d %p %d.\n", a, ptr, *ptr);

    return 0;
}