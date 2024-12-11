#include <stdio.h>
#include <string.h>

int main(void)
{
    char a[20] = "Hello, ";
    char b[20] = "world!";
    char s[20];

    printf("Length of a: %i, b: %i\n", strlen(a), strlen(b));
    printf("After Strcat: %s\n", strcat(a, b));
    printf("After Strcpy:\na: %s\ns: %s\n", a, strcpy(s, a));

    return 0;
}