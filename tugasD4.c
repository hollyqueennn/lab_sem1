#include <stdio.h>

long int likes(long int n)
{
    long int term1 = 0, term2 = 1;
    long int nextTerm;

    for (int j = 0; j < n; j++)
    {
        if (j <= 1)
            nextTerm = j;
        else
        {
            nextTerm = term1 + term2;
            term1 = term2;
            term2 = nextTerm;
        }
    }

    return nextTerm;
}

int main()
{
    int T;
    long int num, res;
    scanf("%d", &T);

    if (T <= 90)
    {
        long int result[T];
        for (int i = 0; i < T; i++)
        {
            scanf("%ld", &num);
            if (num <= 90)
            {
                res = likes(num);
                result[i] = res;
            }
            else
            {
                return 1;
            }
        }

        for (int i = 0; i < T; i++)
        {
            printf("Case #%d: %ld\n", i + 1, result[i]);
        }
    }
    else
    {
        return 1;
    }

    return 0;
}