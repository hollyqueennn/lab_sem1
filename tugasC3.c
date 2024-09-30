#include <stdio.h>

int main()
{
    unsigned long int a, b, c, d, x, y;
    scanf("%lu %lu %lu %lu", &a, &b, &c, &d);

    x = a * b;
    y = c - d;

    if (x == y)
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }

    return 0;
}