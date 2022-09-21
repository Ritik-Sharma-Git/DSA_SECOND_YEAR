#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int main() {
   int a , b , c ,d ;
   cin >> a ;
   cin >> b;
   cin >> c;
   cin >> d;
   if ( a>b && a>c && a>d ){
   cout << a ;
   }
   else if ( b>c && b>a && b>d ){
       cout << b;
   }
   else if ( c>a && c>b && c>d ){
       cout << c;
   }
   else{
       cout << d;
   }
    
    return 0;
}
