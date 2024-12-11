#include <stdio.h>

int main(void)
{
    int day;
    scanf("%i", &day);

    if (day == 1)
    {
        printf("周一\n");
    }
    else if (day == 2)
    {
        printf("周二\n");
    }
    else if (day == 3)
    {
        printf("周三\n");
    }
    else if (day == 4)
    {
        printf("周四\n");
    }
    else if (day == 5)
    {
        printf("周五\n");
    }
    else if (day == 6)
    {
        printf("周六\n");
    }
    else if (day == 7)
    {
        printf("周日\n");
    }

    return 0;
}