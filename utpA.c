#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
	int N, M, Q;
	scanf("%d %d %d", &N, &M, &Q);
	int arr[N][M];
	for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            arr[i][j] = 0;
        }
    }
	while(Q--){
		int X, Y, A;
		scanf("%d %d %d", &X, &Y, &A);
		arr[X][Y] = A;
	}
	
	for (int i = 0; i < N; i++){
		for (int j = 0; j < M; j++){
			printf("%d", arr[i][j]);
			if (j != M-1) putchar(' ');
		}
		putchar('\n');
	}
	return 0;
}