#include <iostream>
using namespace std;
int n = 100 ;
int stack[100];
int top =-1;
 
void push(int val){
if(val>n) {cout<<"overflowed"; }
else{
top++;
stack[top]=val;
}}
void pop(){
cout<<"poped value"<<stack[top]<<endl;
top--;
}
void whatistop(){
cout<<"top value"<<stack[top]<<endl;
}
 
 
 
int main() {
cout<<"jai shree ram";
push(10);
push(20);
whatistop();
pop();
whatistop();
 
	return 0;
}
