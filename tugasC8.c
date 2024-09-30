#include <stdio.h>
#include <stdlib.h>

#define MAX_N 5000

void sortData(int data[], int n){
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(data[j] > data[j + 1]){
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

        double mean = 0;
        for(int j = 0; j < n; j++){
            mean += data[j];
        } mean /= n;
        
        double median;
        if(n % 2 == 0){
            median = (data[n / 2] + data[n / 2 - 1]) / 2.0;
        }else{
            median = data[(n + 1) / 2 - 1];
        }

        printf("Case #%d:\n", i);
        printf("Mean : %.2f\n", mean);
        printf("Median : %.2f\n", median);

    }

return 0;
}