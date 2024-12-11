#include <stdio.h>
int gcd(int m, int n);
int lcm(int m, int n);

int main(void)
{
    int m, n, g, l;
    printf("Input the value of m & n: ");
    scanf("%i %i", &m, &n);

    g = gcd(m, n);

    l = lcm(m, n);

    printf("GCD: %i, LCM: %i", g, l);
}

int lcm(int m, int n)
{
    while (n != 0)
    {
        int t = m % n;
        m = n;
        n = t;
    }

    return m;
}

int gcd(int m, int n)
{
    int a = m;
    int b = n;
    while (n != 0)
    {
        int t = m % n;
        m = n;
        n = t;
    }

    return a / m * b;
}