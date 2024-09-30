#include <stdio.h>

int main(){
    int t, m, i, j, k;
    int n[1000]; 
    int x = 0;

    scanf("%d", &t);
    for(int i = 1; i <= t; i++){
        scanf("%d", &m);
        for(int j = 0; j < m; j++){
            scanf("%d", &n[j]);
        }
        for(int k = 0; k < m; k++){
            x = x + n[k];
        }
        printf("Case #%d: %d\n", i, x);
        x = 0;
    }


    return 0;
}