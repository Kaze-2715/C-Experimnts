#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char string[20];
    char buffer[20];
    int len, idx_1, idx_2;
    char c;

    printf("Before: ");
    scanf("%[^\n]", string);
    len = strlen(string);

    idx_1 = 0;
    idx_2 = 0;
    while (idx_1 < len)
    {
        c = string[idx_1];

        if (isalpha(c))
        {
            buffer[idx_2] = c;
            idx_2++;
        }

        idx_1++;
    }

    printf("After: %s\n", buffer);
    return 0;
}