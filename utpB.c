#include <stdio.h>

int main()
{
	  int total, masalah=0;
	  scanf("%d", &total);
	  while(total--) 
	  {
	  	int a, b, c;
	    int count = 0;
	    
	    scanf("%d %d", &a, &b);
	    getchar();
	   	c = a;
	   	while(a >= b)
	   	{
	   		a = a - b;
	//   	printf("%d\n", A);
			a = a + 1;
	//		printf("%d\n", A);
		   count++;
		   }
		masalah++;
		printf("Case #%d: %d\n", masalah, c + count)  ; 
	  	
	  }
		
		
	    return 0;
}