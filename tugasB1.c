#include <stdio.h>

int main(){

    char id[11], name[101], class, num[5];

    scanf("%s\n", id);
    scanf("%[^\n]\n", name);
    scanf("%c\n", &class);
    scanf("%s", num);

    printf("Id    : %s\n", id);
    printf("Name  : %s\n", name);
    printf("Class : %c\n", class);
    printf("Num   : %s\n", num);

    return 0;
}