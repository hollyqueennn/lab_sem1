#include <stdio.h>

int main(){
    
    int N, opinion;
    int counter = 0;
    scanf("%d", &N);
    
    for(int i = 0; i < N; i++){
        scanf("%d", &opinion);
        if(opinion == 1){
            counter++;
            }
    }
    if(counter == 0){
        printf("easy\n");
    }else{
        printf("not easy\n");
    }

  return 0;
}
