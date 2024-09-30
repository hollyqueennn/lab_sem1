#include <stdio.h>

long int Sum(long int a, long int b)
{
    long int result = 0, multi = 1, bit;

    while (a || b)
    {
        bit = (a % 10) + (b % 10);
        bit %= 10;

        result = (bit * multi) + result;
        a /= 10;
        b /= 10;

        multi *= 10;
    }
    return result;
}

int main()
{
    int n;
    long int a, b;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        scanf("%ld %ld", &a, &b);
        printf("Case #%d: %ld\n", i, Sum(a, b));
    }

    return 0;
}
