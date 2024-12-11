#include <stdio.h>
#define N 5

typedef struct student
{
    char number[20];
    char name[10];
    int scores[3];
}student;

int main(void)
{
    student array[N];
    FILE *fp = fopen("info.txt", "w");

    for (int i = 0; i < N; i++)
    {      
        printf("Name: ");
        scanf("%[^\n]", array[i].name);
        printf("Number: ");
        scanf("%s", array[i].number);
        printf("Maths score: ");
        scanf("%d", &array[i].scores[0]);
        printf("English score: ");
        scanf("%d", &array[i].scores[1]);
        printf("SE score: ");
        scanf("%d", &array[i].scores[2]);
        getchar();
    }
    
    for (int i = 0; i < N; i++)
    {
        fprintf(fp, "%s, ", array[i].name);
        fprintf(fp, "%s, ", array[i].number);
        fprintf(fp, "%d, ", array[i].scores[0]);
        fprintf(fp, "%d, ", array[i].scores[1]);
        fprintf(fp, "%d\n", array[i].scores[2]);
    }

    fclose(fp);

    return 0;
}