#include <stdio.h>

typedef struct
{
    char name[20];
    char number[20];
    struct
    {
        struct
        {
            int math;
            int info;
            int eng;
        }elementary;

        int professional;

    }lesson;
    
}student;

int input(student *ptr);
int output(student *ptr);

int main(void)
{
    student Bob;
    student *ptr = &Bob;

    input(ptr);

    output(ptr);

    return 0;
}

int input(student *ptr)
{
    ptr->lesson.elementary.math = 1;
    ptr->lesson.elementary.info = 1;
    ptr->lesson.elementary.eng = 1;

    printf("Name: ");
    fgets(ptr->name, 20, stdin);
    printf("Number: ");
    fgets(ptr->number, 20, stdin);
    printf("Professional course(1: Computer Theory; 2: Software Engineering; 3: Cybersecurity): \n");
    scanf("%d", &ptr->lesson.professional);

    return 0;
}

int output(student *ptr)
{
    printf("Name: %s", ptr->name);
    printf("Number: %s", ptr->number);
    printf("Courses: ");

    if (ptr->lesson.elementary.math)
    {
        printf("Maths, ");
    }
    if (ptr->lesson.elementary.info)
    {
        printf("Information Basics, ");

    }
    if (ptr->lesson.elementary.eng)
    {
        printf("English, ");
    }

    switch (ptr->lesson.professional)
    {
    case 1:
        printf("Computer Theory\n");
        break;
    
    case 2:
        printf("Software Engineering\n");
        break;

    case 3:
        printf("Cybersecurity\n");
        break;
        
    default:
        break;
    }
    
    
    
}
