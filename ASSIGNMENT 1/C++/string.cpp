#include <iostream>
#include <string>
using namespace std;

int main() {
	string a ;
    string b ;
    string c;
    cin>> a ;
    cin>> b ;
    int l1 = a.size();
    int l2 = b.size();
    cout << l1 << " "<< l2 << endl;
    c= a + b ;
    cout << c << endl;
    
    swap(a[0],b[0]);

    cout << a << " "  << b ;
    
  
    return 0;
}
