#include<stdio.h>

int main()
{
    int M, N;
    int L;
    scanf("%d", &L);

    int i;
    for (i = 1; i <= L; i++)
    {
        scanf("%d", &M);
        scanf("%d", &N);
        if (M > N)
        {
            printf("Case #%d: Go-Jo\n", i);
        }
        else
        {
            printf("Case #%d: Bi-Pay\n", i);
        }
    }

    return 0;
}
