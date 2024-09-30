#include <stdio.h>
#include <stdlib.h>

#define MAX_N 10000

int main(){

    int n;
    int data[MAX_N];
    int count = 0;
    
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &data[i]);
    }
    
    for(int i = 0; i < n - 1; i++){
        int minIndex = i;
        for(int j = i + 1; j < n; j++){
            if(data[j] < data[minIndex]){
                minIndex = j;
            }
        }
        if (i != minIndex){
            int temp = data[i];
            data[i] = data[minIndex];
            data[minIndex] = temp;
            count++;
        }
    }
    
    printf("%d\n", count);

    return 0;
}