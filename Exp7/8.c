#include <stdio.h>

int main(void)
{
    FILE *fp;
    int array[3];
    int tmp;

    fp = fopen("data.dat", "w");

    printf("Input three integers: ");
    scanf("%d %d %d", &array[0], &array[1], &array[2]);

    for (int i = 0; i < 3; i++)
    {
        putw(array[i], fp);
    }

    fclose(fp);
    fp = fopen("data.dat", "r");

    for (int i = 0; i < 3; i++)
    {
        tmp = getw(fp);
        printf("%d ", tmp);
    }
    
    fclose(fp);
}