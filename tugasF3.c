#include <stdio.h> 
 
int main() 
{ 
    int a, b; 
    float c = 0; 
 
    scanf("%d", &a); 
    scanf("%f", &c); 
    b = (a - 2) / c; 
 
    printf("%d\n", b); 
 
    return 0; 
}