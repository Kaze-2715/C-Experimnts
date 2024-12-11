#include <stdio.h>

int main(void)
{
    FILE *fp1 = fopen("Text1.txt", "a+");

    FILE *fp2 = fopen("Text2.txt", "r");

    while (1)
    {
        char c = fgetc(fp2);

        if (c == EOF)
        {
            break;
        }

        fputc(c, fp1);
    }

    fclose(fp2);

    fp2 = fopen("Text3.txt", "r");

    while (1)
    {
        char c = fgetc(fp2);

        if (c == EOF)
        {
            break;
        }

        fputc(c, fp1);
    }

    fclose(fp2);
    fclose(fp1);

    fp1 = fopen("Text1.txt", "r");

    while (1)
    {
        char c = fgetc(fp1);

        if (c == EOF)
        {
            break;
        }

        printf("%c", c);
    }

    fclose(fp1);

    return 0;
}