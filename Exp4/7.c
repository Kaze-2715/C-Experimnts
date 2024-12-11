#include <stdio.h>
#include <string.h>
#define N 20

char *connect(char string1[], char string2[], int len1, int len2);

int main(void)
{
    char string1[2 * N];
    char string2[N];
    int len1, len2;
    printf("String1: ");
    scanf("%[^\n]", string1);
    getchar();
    printf("String2: ");
    scanf("%[^\n]", string2);

    len1 = strlen(string1);
    len2 = strlen(string2);

    connect(string1, string2, len1, len2);

    printf("%s\n", string1);

    return 0;
}

char *connect(char string1[], char string2[], int len1, int len2)
{
    for (int i = 0; i <= len2; i++)
    {
        string1[i + len1] = string2[i];
    }
    return string1;
}