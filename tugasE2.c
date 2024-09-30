#include <stdio.h>
#include <string.h>

int main(){
 int t;
 scanf("%d\n", &t);
 int T;
 
 for (T=0; T < t; T++){
  char string[1005];
  gets(string);
  

  for(int i = 0; string[i]!='\0'; i++){
    if (string[i]>='a' && string[i]<='z'){
        string[i] = string[i]-32;
    }
   }for(int i=0;string[i]!='\0';i++){
      if(string[i] == '2'){
        string[i] = 'Z';
      }else if(string[i] == '1'){
        string[i] = 'I';
      }else if(string[i] == '4'){
        string[i] = 'A';
      }else if(string[i] == '3'){
        string[i] = 'E';
      }else if(string[i] == '5'){
        string[i] = 'S';
      }else if(string[i] == '6'){
        string[i] = 'G';
      }else if(string[i] == '7'){
        string[i] = 'T';
      }else if(string[i] == '8'){
        string[i] = 'B';
      }else if(string[i] == '9'){
        string[i] = 'P';
      }else if(string[i] == '0'){
        string[i] = 'O';
      }
   }
   printf("Case #%d: %s\n" ,(T + 1) ,string);
 }
 return 0;
}