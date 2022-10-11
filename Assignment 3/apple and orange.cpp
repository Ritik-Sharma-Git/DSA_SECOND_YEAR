#include <iostream>
#include <vector>
using namespace std;

int main(){
    int s,t,a,b,m,n ;
    cin>>s>>t;
    cin>>a>>b;
    cin>>m>>n;
    vector<int> apple(m);
    vector<int> orange(n);
    int count1=0;
    int count2=0;
    
    for (int i=0; i<m ; i++) {
        cin>>apple[i];
        apple[i]+=a;
        
        
    }
    
    for (int i=0; i<n ; i++) {
        cin>>orange[i];
        orange[i]+=b;
    
    }   
    
    for (int i=0;i<m; i++) {
       if (apple[i]>=s && apple[i]<=t) {
           count1++;/*  */
       
       }
    }
    
    for (int i=0;i<n; i++) {
       if (orange[i]>=s && orange[i]<=t) {
           count2++;
       
       }
    }
        
    
    
    cout << count1 << "\n" << count2 ;
    
    return 0;
}
