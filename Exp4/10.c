#include <stdio.h>

int str_cpy(char string1[], char string2[], int length, int index);

int main(void)
{
    int n, m;
    printf("Length, index: ");
    scanf("%i, %i", &n, &m);
    getchar();
    char string1[n + 1];
    printf("String: ");
    scanf("%[^\n]", string1);
    char string2[n - m + 1 + 1];

    str_cpy(string1, string2, n, m);

    printf("%s", string2);

    return 0;
}

int str_cpy(char string1[], char string2[],int length, int index)
{
    for (int i = index - 1; i < length; i++)
    {
        string2[i - (index - 1)] = string1[i];
    }

    string2[length - index + 1] = '\0';

    return 0;
}