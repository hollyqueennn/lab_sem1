#include <stdio.h>

long int pukulan(long int x){
    x = x * (150 + 50 * x)/2;

    return x;
}

long int main(){
   long int n;

    scanf("%ld", &n);
    printf("%ld", pukulan(n));
    printf("\n");
    
    return 0;
}