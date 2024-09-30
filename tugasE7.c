#include <stdio.h>
#include <math.h>

int game(int x){
    long angka;
    angka = pow (2, x);
    printf("%ld\n", angka-1);
}

int main(){
    int a;

    scanf("%d", &a);
    game(a);

    return 0;
}