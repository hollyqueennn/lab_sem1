#include <stdio.h>

int nomor(long int x){
    if(x == 1){
        return 1;
    }else if(x % 2 == 1){
        return nomor(x - 1) + nomor(x + 1);
    }else{
        return nomor(x / 2);
    }
   
}
int main(){

    int t;
    long int a;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++){
        scanf("%ld", &a);
        getchar;
        printf("Case #%d: %d\n", i, nomor(a));
        }
    
    return 0;
}