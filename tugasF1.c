#include <stdio.h>

int main(){

   char a[20];
   char b[20];
   char c[20];
   
   char x[20];
   char y[20];
   char z[20];
   
   scanf("%s %s %s", &a, &b, &c);
   getchar();
   scanf("%s %s %s", &x, &y, &z);
   getchar();
   
   printf("%sszs %sszs %sszs\n", a, b, c);
   printf("%sszs %sszs %sszs\n", x, y, z);
  

    return 0;

}