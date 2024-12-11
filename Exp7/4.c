#include <stdio.h>

int main(void)
{
    char buffer[20];
    gets(buffer);

    FILE *fp = fopen("text.txt", "a+");

    fputs(buffer, fp);

    fclose(fp);

    return 0;
}