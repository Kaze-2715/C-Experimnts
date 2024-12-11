#include <stdio.h>

int main(void)
{
    enum
    {
        MON = 1,
        TUE,
        WED,
        THU,
        FRI,
        SAT,
        SUN
    } day;

    day = THU;
    printf("%d", day);

    return 0;
}