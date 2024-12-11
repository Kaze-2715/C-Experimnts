#include <stdio.h>

int main(void)
{
    int dec, oct, hex;
    
    printf("Input a decimal integer: ");
    scanf("%i", &dec);
    printf("Input an octal integer: ");
    scanf("%i", &oct);
    printf("Input a hexadecimal integer: ");
    scanf("%i", &hex);

    printf("Dec: %d\n", dec);
    printf("Oct: 0%o\n", oct);
    printf("Hex: 0x%x\n", hex);

    return 0;
}