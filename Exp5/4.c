#include <stdio.h>

int main(void)
{
    int a, b;
    int *ptr;
    printf("Input two different integers: ");
    scanf("%d %d", &a, &b);

    ptr = &a;

    printf("Value: %p\n", ptr);

    ptr = &b;
    printf("Value: %p\n", ptr);

    return 0;
}