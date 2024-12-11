#include <stdio.h>

int comp(char *string1, char *string2);

int main(void)
{
    char *string1;
    printf("String1: ");
    scanf("%[^\n]", string1);

    getchar();
    
    char *string2;
    printf("String2: ");
    scanf("%[^\n]", string2);

    if (comp(string1, string2) > 0)
    {
        printf("String1 is greater than string2.\n");
    }
    else if (comp(string1, string2) == 0)
    {
        printf("String1 is equal to string2.\n");
    }
    else if (comp(string1, string2) < 0)
    {
        printf("String1 is less than string2.\n");
    }

        return 0;
}

int comp(char *string1, char *string2)
{
    int i = 0;
    int dif;
    while ((string1[i] != '\0') && (string2[i] != '\0'))
    {
        dif = string1[i] - string2[i];

        if (dif != 0)
        {
            return dif;
        }

        i++;
    }

    if ((string1[i] = '\0') && (string2[i] != '\0'))
    {
        return -1;
    }
    else if ((string1[i] != '\0') && (string2[i] = '\0'))
    {
        return 1;
    }
    else if ((string1[i] = '\0') && (string2[i] = '\0'))
    {
        return 0;
    }
    
    
    
    
}