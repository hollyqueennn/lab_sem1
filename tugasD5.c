#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
	int N, counter = 1;
	scanf("%d", &N); getchar();
	while(N--){
		char s[1001];
		scanf("%[^\n]", s); getchar();
		printf("Case #%d: ", counter++);
		for (int i = 0; s[i] != '\0'; i++){
			if (toupper(s[i]) == 'A' || toupper(s[i]) == 'I' ||toupper(s[i]) == 'U' ||toupper(s[i]) == 'E' ||toupper(s[i]) == 'O') 
				continue;
			else {
				putchar(s[i]);
			}
		}
		putchar('\n');
	}
	return 0;
}