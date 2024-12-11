#include <stdio.h>

int main(void)
{
    FILE *fp;
    char *buffer;

    fp = fopen("1.txt", "w");

    while (1)
    {
        char c = getchar();
        if (c == '\n')
        {
            break;
        }
        putc(c, fp);
    }

    fclose(fp);

    return 0;
}