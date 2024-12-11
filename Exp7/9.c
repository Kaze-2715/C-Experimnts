#include <stdio.h>

int main(void)
{
    FILE *src, *dst;
    char buffer[10];

    src = fopen("info.txt", "r");
    dst = fopen("info.dat", "w"); 
    //这里注意打开模式是“只写”，后面读取的时候要重新以只读方式打开！

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
        /* 输出乱码的原因：buffer当中没有存入空字符，而字符串输出以空字符为结束标识。
        有两种方式解决：
        第一种：缓冲区只使用（缓冲区大小 - 1）位，最后一位存上空字符，这样输出的时候自动识别空字符结束。
        第二种：限制printf函数的最大输出字符数*/
    }

    fclose(dst);

    return 0;
}