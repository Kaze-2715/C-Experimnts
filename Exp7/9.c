#include <stdio.h>

int main(void)
{
    FILE *src, *dst;
    char buffer[10];

    src = fopen("info.txt", "r");
    dst = fopen("info.dat", "w"); 
    //����ע���ģʽ�ǡ�ֻд���������ȡ��ʱ��Ҫ������ֻ����ʽ�򿪣�

    while (!feof(src))
    {
        fread(buffer, sizeof(char), sizeof(buffer), src);

        

        fwrite(buffer, sizeof(buffer), 1, dst);
    }

    fclose(src);
    fclose(dst);

    dst = fopen("info.dat", "r");

    while (fread(buffer, sizeof(char), sizeof(buffer), dst) != 0)
    {
        printf("%.10s", buffer);
        /* ��������ԭ��buffer����û�д�����ַ������ַ�������Կ��ַ�Ϊ������ʶ��
        �����ַ�ʽ�����
        ��һ�֣�������ֻʹ�ã���������С - 1��λ�����һλ���Ͽ��ַ������������ʱ���Զ�ʶ����ַ�������
        �ڶ��֣�����printf�������������ַ���*/
    }

    fclose(dst);

    return 0;
}