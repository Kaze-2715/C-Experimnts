#include <stdio.h>
#include <string.h>

int main(void)
{
    char string1[20];
    char string2[20];
    printf("Text: ");
    scanf("%[^\n]", string1);
    int len = strlen(string1);

    for (int i = 0; i < len; i++)
    {
        string2[i] = string1[len - i - 1];
    }
    printf("%s", strcat(string1, string2));

    return 0;
}