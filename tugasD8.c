#include <stdio.h>
#include <stdlib.h>

#define MAX_N 500

void sortData(int data[], int n){
    for(int i = 0; i < n - 1; i++){
        for (int j = 0; j < n - i - 1; j++){
            if (data[j] > data[j + 1]){
                int temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;
            }
        }
    }
}

int main(){
    
    int t, n;
    int data[MAX_N];
    
    scanf("%d", &t);
    for(int i = 1; i <= t; i++){
        scanf("%d", &n);
        for(int j = 0; j < n; j++){
            scanf("%d", &data[j]);
        } sortData(data, n);
        
        int maxDifference = data[1] - data[0];
        for(int j = 2; j < n; j++){
            int difference = data[j] - data[j - 1];
            if(difference > maxDifference){
                maxDifference = difference;
            }
        }
        
        printf("Case #%d: %d\n", i, maxDifference-1);
    }

    return 0;
}