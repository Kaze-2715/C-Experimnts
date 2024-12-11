#include <stdio.h>
#include <string.h>

int main(void)
{
    int n, len1, len2;
    char string1[100] = "Hello, world!";
    char *string2 = "A new level of abstraction!";
    char *ptr;


    len1 = strlen(string1);
    len2 = strlen(string2);

    printf("Method 1: \n");
    for (int i = 4; i < len1; i++)
    {
        printf("%c", string1[i]);
    }
    printf("\n");
    for (int i = 4; i < len2; i++)
    {
        printf("%c", string2[i]);
    }
    printf("\n");

    printf("Method 2: \n");
    for (ptr = string1 + 4; ptr < string1 + len1; ptr++)
    {
        printf("%c", *ptr);
    }
    printf("\n");
    for (ptr = string2 + 4; ptr < string2 + len2; ptr++)
    {
        printf("%c", *ptr);
    }
    printf("\n");

    printf("Method 3: \n");
    printf("%.*s\n", len1 - 4, string1 + 4);
    printf("%.*s\n", len2 - 4, string2 + 4);
}