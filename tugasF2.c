#include<stdio.h>

int main(){
   char str[100];

   int i=0;
   scanf("%s", str);
   printf("%c",*str);

   while(str[i]!='\0'){
       if(str[i]=='_'){
            i++;
            printf("%c",*(str+i));
       }
       i++;
   }
    printf("\n");

   return 0;
}