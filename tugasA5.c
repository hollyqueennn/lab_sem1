#include <stdio.h>

int count = 1;

void owo()
{
    int a, b = 1, sec = 0;

    scanf("%d", &a);

    for(int f = 1; b <= a; f++)
    {
        b += f;
        sec++;
    }

    printf("Case #%d: %d\n", count++, sec);
}

int main()
{
    int t;
    
    scanf("%d", &t);
    
    for(int i = 0; i < t; i++)
    {
        owo();
    }

    return 0;
}