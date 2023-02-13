#include<bits/stdc++.h>
using namespace std;
 
int min_index(vector<int>arr , int start){
    int min = start;
    int len = arr.size(); 
    for(int i = start ;i<len  ;i++){
        if(arr[min]>arr[i]){
            min = i;
        }
    }
    return min;
}
 
void swap(vector<int>&arr , int a , int b ){
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b]=temp;
}
 
void sort(vector<int>&arr){
 
    for(int i = 0 ; i<arr.size() ; i++){
 
       int index = min_index(arr , i );
 
       swap(arr , i , index);
 
    }
}
 
void display(vector<int>arr){
 
for(int i = 0 ; i <arr.size() ;i++ ){
    cout<<arr[i]<<" ";
}
cout<<endl;
 
}
int main()
{
 
    vector<int>arr= {90,80,70,60,50,40,30,20,10};
    display(arr);
 
    sort(arr);
 
    display(arr);
 
    return 0;
}
