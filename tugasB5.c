#include<stdio.h>

int main(){
	
	int n, a, b;
	scanf("%d", &n);
	
	for(a = 0; a < n; a++){ 
		for(b = 0; b < n; b++){
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
