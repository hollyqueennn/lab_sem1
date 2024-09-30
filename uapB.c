#include<stdio.h>
#include<string.h>

struct Plant{
    int R;
    char M[41];
} plants[1001];

int main(){
    freopen("testdata.in", "r", stdin);
    int N, i, j;
    char c;
    scanf("%d", &N);
    getchar();
    for(i = 0; i < N; i++){
        scanf("%d", &plants[i].R);
        scanf("%c", &c); 
        scanf("%[^\n]", plants[i].M);
    }

    for(i = 0; i < N-1; i++){
        for(j = 0; j < N-i-1; j++){
            if(strcmp(plants[j].M, plants[j+1].M) > 0){
                struct Plant temp = plants[j];
                plants[j] = plants[j+1];
                plants[j+1] = temp;
            }
        }
    }

    for(i = 0; i < N; i++){
        printf("%d %s\n", plants[i].R, plants[i].M);
    }
    
    return 0;
}