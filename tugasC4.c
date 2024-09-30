#include <stdio.h>

int main()
{
    int numOfBalloons, power;

    scanf("%d", &numOfBalloons);
    scanf("%d", &power);

    int balloonWeight;
    int canBePopped = 0;

    for (int i = 0; i < numOfBalloons; i++)
    {
        scanf("%d", &balloonWeight);
        if (balloonWeight < power)
        {
            canBePopped++;
        }
    }

    printf("%d\n", canBePopped);
    return 0;
}