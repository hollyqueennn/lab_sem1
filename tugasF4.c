#include <stdio.h>
#include <string.h>

int b = 100, e = 135, s = 264, r = 37, o = 74, loop, food[10005], foodben;

int main()
{
    scanf("%d", &loop);
    for (int i = 0; i < loop; i++)
    {
        scanf("%d", &food[i]);
    }

    for (int i = 0; i < loop; i++)
    {
        foodben = food[i];
        if (food[i] != foodben)
            printf(" ");
        if (food[i] >= 2 * s)
        {
            printf("S");
            food[i] %= 2 * s;
        }

        if (food[i] >= 2 * e)
        {
            if (food[i] != foodben)
                printf(" ");
            printf("E");
            food[i] %= 2 * e;
        }

        if (food[i] >= 2 * b)
        {
            if (food[i] != foodben)
                printf(" ");
            printf("B");
            food[i] %= 2 * b;
        }

        if (food[i] >= 2 * o)
        {
            if (food[i] != foodben)
                printf(" ");
            printf("O");
            food[i] %= 2 * o;
        }

        if (food[i] >= 2 * r)
        {
            if (food[i] != foodben)
                printf(" ");
            printf("R");
            food[i] %= 2 * r;
        }
        printf("\n");
    }
}
