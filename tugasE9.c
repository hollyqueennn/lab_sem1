#include <stdio.h>
#include <math.h>

int main(){

    int n, a, b;

    scanf("%d", &n);

    a = (n-1)/2;
    b = a+1;
    printf("%d = %d + %d\n", n, a, b);

    return 0;
}