#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int sort(char **strings, int num);

int main(void)
{
    int n;
    printf("Number of strings: ");
    scanf("%d", &n);
    getchar();

    char *strings[n];

    for (int i = 0; i < n; i++)
    {
        strings[i] = malloc(100);
        printf("Input a string: ");
        fgets(strings[i], 100, stdin);
    }

    sort(strings, n);

    printf("After:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%s", strings[i]);
    }

    return 0;
}

int sort(char **strings, int num)
{
    for (int i = 0; i < num - 1; i++)
    {
        int idx = i;
        char *tmp = strings[i];

        for (int j = i + 1; j < num; j++)
        {
            if (strcmp(strings[j], strings[idx]) > 0)
            {
                tmp = strings[j];
                idx = j;
            }
        }
        strcpy(strings[idx],strings[i]);
        strcpy(strings[i],tmp);
    }

    return 0;
}