#include <stdio.h>

int main(){
    
    int t, n, x, tuker, temp;
    int a[501];
    int i, j;
    int case_num = 1;
    
    scanf("%d", &t);
    while(t--){
        tuker = 0;
        scanf("%d %d", &n, &x);
        for(i = 0; i < n; i++){
            scanf("%d", &a[i]);
        }
        for(i = 0; i < n - 1; i++){
            for(j = 0; j < n - i - 1; j++){
                if(a[j] > a[j + 1]){
                    temp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp;
                    tuker++;
                }
            }
        }
        
        printf("Case #%d: %d\n", case_num, tuker*x);
        case_num++;
    }

    return 0;
}