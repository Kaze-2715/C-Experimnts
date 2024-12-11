#include <stdio.h>
#include <string.h>

int reverse(char *string, int len);

int main(void)
{
    char *string;
    int len;
    printf("Input a string: ");
    scanf("%[^\n]", string);
    len = strlen(string);
    printf("Before: %s\n", string);

    reverse(string, len);

    printf("After: %s\n", string);

    return 0;
}

int reverse(char *string, int len)
{
    char tmp[len + 1];

    for (int i = 0; i < len; i++)
    {
        tmp[i] = string[len - i - 1];
    }

    for (int i = 0; i < len; i++)
    {
        string[i] = tmp[i];
    }

    return 0;
}