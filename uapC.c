#include <stdio.h>

int main() {
    int T, N, St, i, j, k, L, R;
    scanf("%d", &T);
    for (i = 1; i <= T; i++){
        scanf("%d %d", &N, &St);
        int seats[St];
        for (j = 0; j < St; j++){
            scanf("%d", &seats[j]);
        }
        L = 0;
        R = 0;
        int found = 0;
        for (j = 0; j < St - 1; j++){
            if (seats[j + 1] - seats[j] >= N + 1){
                L = seats[j];
                R = seats[j + 1];
                found = 1;
                break;
            }
        }
        if (found){
            printf("Case #%d: %d %d\n", i, L, R);
        } else {
            printf("Case #%d: -1\n", i);
        }
    }
    return 0;
}