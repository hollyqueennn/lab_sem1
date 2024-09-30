#include <stdio.h>

int n;
int nilai(int a, int b){

    while (a != b){
        if(a == 1){
            a = a;
            break;
        }else if(a % 2 == 0){
            a = a / 2;
        }else if(a % 2 != 0){
            a = a * 3 + 1;
        }
    }
    if(a == b){
        printf("Case #%d: YES\n", n);
    }else{
        printf("Case #%d: NO\n", n);
    }
}

int main(){
    int a, b, t;
    
    scanf("%d", &t);
    for(n = 1; n <= t; n++){
        scanf("%d %d", &a, &b);
        nilai(a, b);
        }

  return 0;
}
