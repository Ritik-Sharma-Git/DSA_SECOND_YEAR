#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n , a , b;
    scanf("%d", &n);
    int sum=0;
    while (n!=0) {
       a=n%10;
       b=n/10;
       n=b;
       sum+=a;
    
    }
    printf("%d", sum);
    return 0;
}
