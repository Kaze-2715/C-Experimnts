#include <stdio.h>

typedef struct student
{
    char number[20];
    char name[10];
    int scores[3];
} student;

int linecount(FILE *fp);

int main(void)
{
    FILE *fp;
    int line;
    float avg;

    fp = fopen("info.txt", "r");
    if (fp == NULL)
    {
        printf("�޷����ļ���\n");
        return 1;
    }

    line = linecount(fp);
    rewind(fp); // �����ļ�ָ�뵽��ͷ

    student array[line];

    for (int i = 0; i < line; i++)
    {
        // ȷ���ļ���ʽ���ȡƥ��
        int f = fscanf(fp, "%[^,],%[^,],%d,%d,%d", array[i].name, array[i].number, &array[i].scores[0], &array[i].scores[1], &array[i].scores[2]);
        if (f != 5)
        {
            printf("�ļ���ʽ����\n");
            fclose(fp);
            return 1;
        }
    }

    for (int i = 0; i < line; i++)
    {
        int sum = array[i].scores[0] + array[i].scores[1] + array[i].scores[2];
        avg = (float)sum / 3;

        printf("Name: %s\nTotal: %d\nAverage: %.2f\n", array[i].name, sum, avg);
    }

    fclose(fp);
    return 0;
}

int linecount(FILE *fp)
{
    int count = 0;
    char buffer[100];

    while (fgets(buffer, sizeof(buffer), fp) != NULL)
    {
        count++;
    }

    return count;
}