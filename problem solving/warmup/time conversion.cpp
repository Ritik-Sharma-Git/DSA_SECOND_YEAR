
#include <iostream>
using namespace std;

int main(){
    string s;
    cin>>s;
    string h,m,sec;
    h=s[0];
    h+=s[1];
    m=s[3];
    m+=s[4];
    sec=s[6];
    sec+=s[7];
    
    if (s[8]=='A') {
        if (h=="12"){
            h="00";
            cout<<h<<":"<<m<<":"<<sec;
        }
        else {
        cout<<h<<":"<<m<<":"<<sec;
        }
        
        
    } 
    
    
    else if (h=="12") {
         cout<<h<<":"<<m<<":"<<sec;
      
    }
    else{
    int a = stoi(h);
    h=to_string(a+12);
    cout<<h<<":"<<m<<":"<<sec;
    }


    return 0;
    
}
