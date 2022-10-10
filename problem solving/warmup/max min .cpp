#include <iostream>
using namespace std;

int main(){
    long int minsum;
    long int maxsum;
    long int arr[5];
    
    for (int i=0; i<5; i++) {
        cin>>arr[i];    
    }
    long int min=arr[0],max=arr[0];
    for (int i=0; i<5; i++) {
        if (arr[i]>max) {
            max=arr[i];
        }
        else if (arr[i]<min) {
            min=arr[i];
        }
    
    }
    long int sum=0;
    for (int i=0; i<5; i++) {
       sum+=arr[i]; 
    
    }
    minsum=sum-max;
    maxsum=sum-min;
    cout<<minsum<<" ";
    cout<<maxsum<<" ";
    
    return 0;
}

