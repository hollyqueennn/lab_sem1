#include <stdio.h>
#include <math.h>

int main()
{
    int num, i;
    long int count = 0;
    int j, k;

    scanf("%d", &j);

    for (k = 0; k < j; k++)
    {

        scanf("%d", &num);
        i = 1;
        count = 0;
        long int isqrt = sqrt(num);
        while (i <= isqrt)
        {
            if (num % i == 0)
            {
                count++;
                if (i != num / i)
                {
                    count++;
                }
            }
            i++;
        }

        printf("Case #%d: %ld\n", k + 1, count);
    }
    return 0;
}
