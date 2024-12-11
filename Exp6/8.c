#include <stdio.h>

typedef struct memo
{
    char type;
    union
    {
        int i;
        float f;
        char c;
    } data;

} memo;

int input(memo *);
int output(memo *);

int main(void)
{
    memo a;
    memo *ptr = &a;

    input(ptr);

    output(ptr);

    return 0;
}

int input(memo *a)
{
    printf("Input data type(i or f or c): ");
    scanf("%c", &a->type);

    getchar();

    printf("Input data: ");
    switch (a->type)
    {
    case 'i':
        scanf("%d", &a->data.i);
        break;

    case 'f':
        scanf("%f", &a->data.f);
        break;

    case 'c':
        scanf("%c", &a->data.c);
        break;

    default:
        break;
    }

    return 0;
}

int output(memo *a)
{
    switch (a->type)
    {
    case 'i':
        printf("Type: integer, value: %d", a->data.i);
        break;

    case 'f':
        printf("Type: float, value: %f", a->data.f);
        break;

    case 'c':
        printf("Type: character, value: %c", a->data.c);
        break;

    default:
        break;
    }
}