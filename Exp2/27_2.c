#include <stdio.h>

int main(void)
{
    int day;
    printf("������ţ�");
    scanf("%i", &day);

    switch (day)
    {
    case 1:
        printf("��һ\n");
        break;

    case 2:
        printf("�ܶ�\n");
        break;

    case 3:
        printf("����\n");
        break;

    case 4:
        printf("����\n");
        break;

    case 5:
        printf("����\n");
        break;

    case 6:
        printf("����\n");
        break;
    
    case 7:
        printf("����\n");
        break;
    
    default:
        break;
    }

    return 0;
}