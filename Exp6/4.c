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

int output(employee array[], int count);

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

    output(mem, N);

    return 0;
}

int output(employee array[],int count)
{
    for (int i = 0; i < count; i++)
    {
        printf("Name: %s", array[i].name);
        printf("Gender: %s", array[i].gender);
        printf("Birthday: %s", array[i].birthday);
        printf("Address: %s", array[i].address);
        printf("Phone number: %s", array[i].phonenumber);
        printf("Admitted date: %s", array[i].admitteddate);
        printf("\n");
    }
}