#include <stdio.h>
#include <string.h>

int main(void)
{
    char *a;
    int len;
    scanf("%s", a);
    len = strlen(a);

    for (int i = 0; i < len; i++)
    {
        if (a[i] == '.')
        {
            printf("ÇëÖØÐÂÊäÈë\n");
            return 0;
        }
        
    }

    printf("%s", a);

    return 0;
}