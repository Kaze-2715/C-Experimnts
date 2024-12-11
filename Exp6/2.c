#include <stdio.h>
#define N 3

typedef struct score
{
    int math;
    int eng;
    int prog;
} score;

typedef struct student
{
    char name[20];
    char serial[11];
    score scores;
} student;

int main(void)
{
    student stu[N];

    for (int i = 0; i < N; i++)
    {
        printf("Name: ");
        fgets(stu[i].name, 100, stdin);
        printf("Serial number: ");
        fgets(stu[i].serial, 100, stdin);
        printf("Math score: ");
        scanf("%d", &stu[i].scores.math);
        printf("English score: ");
        scanf("%d", &stu[i].scores.eng);
        printf("Programming score: ");
        scanf("%d", &stu[i].scores.prog);
        getchar();
    }

    printf("Students info: \n\n");
    
    for (int i = 0; i < N; i++)
    {
        printf("Name: %s", stu[i].name);
        printf("Serial number: %s", stu[i].serial);
        printf("Math score: %d\n", stu[i].scores.math);
        printf("English score: %d\n", stu[i].scores.eng);
        printf("Programming score: %d\n", stu[i].scores.prog);
        printf("\n");
    }

    return 0;
}
