#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    char string[20];
    int len;
    printf("Before: ");
    scanf("%[^\n]", string);
    len = strlen(string);

    for (int i = 0; i < len; i++)
    {
        string[i] = tolower(string[i]);
    }

    printf("After: %s\n", string);

    return 0;
}