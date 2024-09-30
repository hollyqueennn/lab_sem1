#include <stdio.h>

int main()
{
    long int num1, num2;
    int start;
    scanf("%d", &start);

    for (int i = 1; i <= start; i++)
    {
        scanf("%ld %ld", &num1, &num2);
        if (num1 % 2 != 0 && num2 % 2 != 0)
        {
            printf("Case #%d: Need more frogs\n", i);
        }
        else
        {
            printf("Case #%d: Party time!\n", i);
        }
    }

    return 0;
}