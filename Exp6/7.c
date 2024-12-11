#include <stdio.h>

typedef union data
{
    int i;
    float f;
    char c;
} data;

int main(void)
{
    data array[3];

    printf("Input an integer: ");
    scanf("%d", &array[0].i);
    printf("Input a float number: ");
    scanf("%f", &array[1].f);
    getchar();
    printf("Input a character: ");
    scanf("%c", &array[2].c);

    data *ptr = &array[0];
    printf("%d\n", ptr->i);
    ptr = &array[1];
    printf("%f\n", ptr->f);
    ptr = &array[2];
    printf("%c\n", ptr->c);

    return 0;
}