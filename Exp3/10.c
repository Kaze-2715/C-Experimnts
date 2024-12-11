#include <stdio.h>
#include <string.h>

int main(void)
{
    char string[20];
    printf("Text: ");
    scanf("%[^\n]", string);
    int len = strlen(string);
    printf("%s\n", string);

    for (int i = 0; i < len; i++)
    {
        if (string[i] == ' ')
        {
            printf("\n");
        }
        else
        {
            printf("%c", string[i]);
        }
    }

    return 0;
}