#include <stdio.h>

char *func(int num);

int main(void)
{
    int num;
    printf("Num: ");
    scanf("%d", &num);
    char *day = func(num);

    printf("%s", day);

    return 0;
}

char *func(int num)
{
    switch (num)
    {
    case 1:
        return "Monday";
        break;

    case 2:
        return "Tuesday";
        break;

    case 3:
        return "Wednesday";
        break;

    case 4:
        return "Thurday";
        break;

    case 5:
        return "Friday";
        break;
    
    case 6:
        return "Saturday";
        break;

    case 7:
        return "Sunday";
        break;

    default:
        break;
    }
}