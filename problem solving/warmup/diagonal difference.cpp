#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n][n];
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
         cin>>arr[i][j];
        }
    }
    int sum1=0;
    int sum2=0;
    int diff;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (i==j) {
                sum1=sum1+arr[i][j];
            
            }
        }
    }
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (i+j==n-1) {
                sum2=sum2+arr[i][j];
            
            }
        }
    }
    diff=sum1-sum2;
    if (diff>0) {
    cout<<diff<<endl;
    }
    else {
    diff=sum2-sum1;
    cout<<diff<<endl;
    }
    return 0;
}
