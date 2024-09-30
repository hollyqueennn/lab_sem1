#include<stdio.h>

int main(){
	
	int n, a, b;
    int x, y;
	scanf("%d", &n);
    scanf("%d %d", &x, &y);
	
	for(a = 0; a < n; a++){ 
		for(b = 0; b < n; b++){
			if (a == x && b == y){
                printf("C");
            }else printf("#");

		}
		printf("\n");
	}


	return 0;
}
