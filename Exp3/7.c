#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    char text[50];
    int letters = 0;
    int spaces = 0;
    int digits = 0;
    int others = 0;
    int len;
    char c;
    printf("Text: ");
    scanf("%[^\n]", text);
    len = strlen(text);

    for (int i = 0; i < len; i++)
    {
        c = text[i];

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

    printf("Count of letters: %i, spaces: %i, digits: %i, others: %i\n", letters, spaces, digits, others);

    return 0;
}