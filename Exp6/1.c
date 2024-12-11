#include <stdio.h>

typedef struct date
{
    int year;
    int month;
    int day;
} date;

int main(void)
{
    date birthday;
    int wrong = 0;

    printf("Input the birth year: ");
    scanf("%d", &birthday.year);

    printf("Input the birth month: ");
    scanf("%d", &birthday.month);

    printf("Input the birth day: ");
    scanf("%d", &birthday.day);


    if (!((birthday.year >= 1900) && (birthday.year < 2024)))
    {
        printf("Worng year!\n");
        wrong = 1;
    }
    if (!((birthday.month >= 1) && (birthday.month <= 12)))
    {
        printf("Wrong month!\n");
        wrong = 1;
    }
    if (!((birthday.day >= 1) && (birthday.day <= 31)))
    {
        printf("Wrong day!\n");
        wrong = 1;
    }

    if (wrong)
    {
        return 0;
    }
    else
    {
        printf("Birthday: %d.%d.%d", birthday.year, birthday.month, birthday.day);

        return 0;
    }

    
    
    
}