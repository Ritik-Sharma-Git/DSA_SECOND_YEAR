#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{  int a,b ;
   float m,n ;
   scanf("%d %d", &a ,&b);
   scanf("%f %f", &m ,&n);
   int sum , sub;
   float fsum , fsub;
   sum=a+b;
   sub=a-b;
   fsum=m+n;
   fsub=m-n;
   printf("%d %d \n", sum , sub);
   printf("%.1f %.1f", fsum , fsub);
	
    
    return 0;
}
