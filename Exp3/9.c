#include <stdio.h>
#include <string.h>

int main(void)
{
    int n, m;
    char string[20];
    char after[20];
    printf("Text: ");
    scanf("%[^\n]", string);
    n = strlen(string);
    printf("Input the value of m: ");
    scanf("%d", &m);

    for (int i = m - 1; i < n; i++)
    {
        after[i - (m - 1)] = string[i];
    }

    printf("%s\n", after);

    return 0;
}