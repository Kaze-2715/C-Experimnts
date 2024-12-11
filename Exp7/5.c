#include <stdio.h>
#include <string.h>

int main(void)
{
    FILE *fp;
    char *find;
    char buffer[50];

    fp = fopen("text.txt", "r");

    while (fgets(buffer, sizeof(buffer), fp) != NULL)
    {
        find = strchr(buffer, '\n');
        if (find)
        {
            *find = '\0';
        }
        puts(buffer);
    }
    
    fclose(fp);

    return 0;
}