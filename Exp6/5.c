#include <stdio.h>
#define N 3

typedef struct employee
{
    char name[20];
    char gender[10];
    char birthday[10];
    char address[100];
    char phonenumber[15];
    char admitteddate[10];
} employee;

int output(employee *ptr);

int main(void)
{
    employee mem[N];

    for (int i = 0; i < N; i++)
    {
        printf("Name: ");
        fgets(mem[i].name, 100, stdin);
        printf("Gender: ");
        fgets(mem[i].gender, 100, stdin);
        printf("Birthday: ");
        fgets(mem[i].birthday, 100, stdin);
        printf("Address: ");
        fgets(mem[i].address, 100, stdin);
        printf("Phone number: ");
        fgets(mem[i].phonenumber, 100, stdin);
        printf("Admitted date: ");
        fgets(mem[i].admitteddate, 100, stdin);
    }

    for (int i = 0; i < N; i++)
    {
        employee *ptr = &mem[i];
        output(ptr);
    }
    

    return 0;
}

int output(employee *ptr)
{
        printf("Name: %s", ptr->name);
        printf("Gender: %s", ptr->gender);
        printf("Birthday: %s", ptr->birthday);
        printf("Address: %s", ptr->address);
        printf("Phone number: %s", ptr->phonenumber);
        printf("Admitted date: %s", ptr->admitteddate);
        printf("\n");
}