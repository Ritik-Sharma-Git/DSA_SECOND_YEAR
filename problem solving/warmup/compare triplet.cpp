#include <iostream>
#include <vector>
using namespace std;

int main(){
    
    
    vector<int> a(3);
    vector<int> b(3);
    for (int i=0; i<3; i++) {
    cin>>a[i];
    }
    for (int i=0; i<3; i++) {
    cin>>b[i];
    }
     int alice=0 , bob=0; 
    
    for (int i=0; i<3; i++) {
        if (a[i]>b[i] ) {
            alice++;
        }
        else if (b[i]>a[i] ) {
             bob++;
        }
        
    }
    cout<<alice<<" "<<bob;
    

    return 0;
}
