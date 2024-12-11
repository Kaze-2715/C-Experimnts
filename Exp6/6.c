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

    printf("%d\n", array[0].i);
    printf("%f\n", array[1].f);
    printf("%c\n", array[2].c);

    return 0;
}
