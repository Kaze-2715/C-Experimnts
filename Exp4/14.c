#include <stdio.h>
#include <string.h>

int converse(char *);

int main(void)
{
    char *text;
    int index;
    printf("Input the day: ");
    scanf("%[^\n]", text);

    index = converse(text);

    printf("Index: %i", index);

    return 0;
}

int converse(char *text)
{
    if (!strcmp(text, "Monday"))
    {
        return 1;
    }
    else if (!strcmp(text, "Tuesday"))
    {
        return 2;
    }
    else if (!strcmp(text, "Wednesday"))
    {
        return 3;
    }
    else if (!strcmp(text, "Thursday"))
    {
        return 4;
    }
    else if (!strcmp(text, "Friday"))
    {
        return 5;
    }
    else if (!strcmp(text, "Saturday"))
    {
        return 6;
    }
    else if (!strcmp(text, "Sunday"))
    {
        return 7;
    }
    else
    {
        return -1;
    }
}
