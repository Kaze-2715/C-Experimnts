#include <stdio.h>

int write();
int read();

int main(void)
{
    char key;
    while (1)
    {

        printf("Press 'E' to stop\nPress 'W' to write\nPress 'R' to read\nPress a button: ");
        key = getchar();
        printf("\n");

        if ((key == 'E') || (key == 'e'))
        {
            break;
        }
        else if ((key == 'W') || (key == 'w'))
        {
            getchar();
            write();
        }
        else if ((key == 'R') || (key == 'r'))
        {
            getchar();
            read();
        }
        else if (key == '\n')
        {
            continue;
        } 
        
    }

    return 0;
}

int write()
{
    FILE *fp;
    char filename[10] = {0};
    char buffer[1024] = {0};
    int loc = 0;

    printf("Input the filename to create a file: ");
    scanf("%s", filename);

    fp = fopen(filename, "w+");
    if (fp == NULL)
    {
        printf("Failed to create the file.");
        return -1;
    }

    printf("User input: ");
    getchar();
    scanf("%[^\n]", buffer);

    fprintf(fp, buffer);

    loc = ftell(fp);
    printf("Cursor is located at the %dth character.\n", loc);

    rewind(fp);

    while (fread(buffer, sizeof(char), sizeof(buffer) - 1, fp) != 0)
    {
        printf("You just input: %s\n", buffer);
    }
    
    fclose(fp);

    return 0;
}

int read()
{
    FILE *fp;
    char filename[10] = {0};
    char buffer[10] = {0};

    printf("Input the filename to read the file: ");
    scanf("%s", filename);
    getchar();
    fp = fopen(filename, "r");
    if (fp == NULL)
    {
        printf("Failed to open file.\n");
        return -1;
    }

    while (fread(buffer, sizeof(char), sizeof(buffer) - 1, fp) != 0)
    {
        printf("Contents: %s", buffer);
    }
    printf("\n\n");

    return 0;
}