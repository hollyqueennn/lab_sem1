#include <stdio.h>
#include <string.h>
#define MAX_NAME_LEN 50

typedef struct{
    char name[MAX_NAME_LEN + 1];
    int number;
}Data;

void sortData(Data data[], int n){
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(data[i].number < data[j].number){
                Data temp = data[i];
                data[i] = data[j];
                data[j] = temp;
            }
            else if(data[i].number == data[j].number && strcmp(data[i].name, data[j].name) > 0){
                Data temp = data[i];
                data[i] = data[j];
                data[j] = temp;
            }
        }
    }
}

int main(){
    
    int t, n;
    scanf("%d", &t);
    
    for(int i = 1; i <= t; i++){
        scanf("%d", &n);
        Data data[n];
        
        for(int j = 0; j < n; j++){
            scanf("%[^#]#%d", data[j].name, &data[j].number);
        }
        sortData(data, n);
        printf("Case #%d:\n", i);
        
        for(int j = 0; j < n; j++){
            printf("%s - %d\n", data[j].name, data[j].number);
        }
    }

    return 0;
}
