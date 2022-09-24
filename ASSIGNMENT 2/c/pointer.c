#include <stdio.h>


int main() {
    int a, b;
    scanf("%d \n %d", &a ,&b);
    int sum=a+b;
    int sub=a-b;
    printf("%d\n", sum);
    if (sub>=0) {
    printf("%d \n",sub);
    }
    else {
    sub=b-a;    
    printf("%d",sub);
    }

    return 0;
}
