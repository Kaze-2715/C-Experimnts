#include <stdio.h>
#include <string.h>
#include <ctype.h>

int count(char *string, int len);

int main(void)
{
    char *string;
    int len;
    printf("Text: ");
    scanf("%[^\n]", string);
    len = strlen(string);

    count(string, len);
}

int count(char *string, int len)
{
    int letters, digits, spaces, others;

    letters = 0;
    digits = 0;
    spaces = 0;
    others = 0;
    
    for (int i = 0; i < len; i++)
    {
        char c = string[i];
        if (isalpha(c))
        {
            letters++;
        }
        else if (isdigit(c))
        {
            digits++;
        }
        else if (isspace(c))
        {
            spaces++;
        }
        else
        {
            others++;
        }
    }
    
    printf("Letters: %i\nDigits: %i\nSpaces: %i\nOthers: %i\n", letters, digits, spaces, others);

    return 0;
}
