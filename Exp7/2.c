#include <stdio.h>

int main(void)
{
    FILE *fp = fopen("text.txt", "r");

    while (1)
    {
        char c = fgetc(fp);

        if (c == EOF)
        {
            break;
        }

        printf("%c", c);
    }

    fclose(fp);

    return 0;
}