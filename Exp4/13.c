#include <stdio.h>
#include <string.h>

int to_lower(char *, int);

int main(void)
{
    char *string;
    int len;
    printf("Text: ");
    scanf("%[^\n]", string);
    len = strlen(string);

    to_lower(string, len);

    printf("%s", string);

    return 0;
}

int to_lower(char *string, int len)
{
    for (int i = 0; i < len; i++)
    {
        char c = string[i];

        if ((c >= 65) && (c <= 90))
        {
            string[i] = c + 32;
        }
    }

    return 0;
}