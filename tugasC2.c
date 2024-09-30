#include <stdio.h>

int main(){

    char n[101], a[9], u[101];

    scanf("%[^\n]\n", n);
    scanf("%s\n", a);
    scanf("%s", u);

    printf("Name: %s\n", n);
    printf("NIS: %s\n", a);
    printf("Age: %s\n", u);

    return 0;
}