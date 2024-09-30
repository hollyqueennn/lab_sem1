#include <stdio.h>

void pyramid(int n)
{
    int i, space, k = 0;

    for (i = 1; i <= n; ++i, k = 0)
    {
        for (space = 1; space <= n - i; ++space)
        {
            printf(" ");
        }
        while (k != 2 * i - 1)
        {
            printf("*");
            ++k;
        }
        printf("\n");
    }
}

int main()
{
    int play, rows;
    scanf("%d", &play);

    for (int i = 0; i < play; i++)
    {
        scanf("%d", &rows);
        pyramid(rows);
    }

    return 0;
}
