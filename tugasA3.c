#include <stdio.h>
int main()
{
    int a, b, c, d, e, f, i;
    scanf("%d", &i);
    scanf("%d%d", &a, &b);
    scanf("%d%d", &c, &d);
    scanf("%d%d", &e, &f);

    int x = ((a / b) << b);
    int y = ((c / d) << d);
    int z = ((e / f) << f);

    printf("%d\n%d\n%d\n", x, y, z);
    return 0;
    ;
}