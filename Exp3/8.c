#include <stdio.h>
#include <string.h>

int main(void)
{
    char before[20];
    char after[20];
    printf("Text: ");
    scanf("%[^\n]", before);

    int len = strlen(before);
    for (int i = 0; i < len; i++)
    {
        after[i] = before[len - i - 1];
    }
    
    printf("After: %s\n", after);
    return 0;
}