#include <iostream>
using namespace std;
int a[100];
int top=-1;
void push(int data){
	top++;
	a[top]=data;
	
}
void pop(){
	if(top==-1){
		cout<<"Underflow"<<endl;
	}
	top--;
}
int peak(){
	if(top==-1){
		cout<<"Stack is empty";
	}
	return a[top];
}
bool isempty(){
	if(top==-1){
		return 1;
	}
	return 0;
}
int sizeofstack(){
	return top+1;
}
int main() {
	// your code goes here
	push(1);
	push(2);
	pop();
	push(5);
	cout<<isempty()<<endl;
	cout<<peak()<<endl;
	cout<<sizeofstack();
	
	return 0;
}
