#include <iostream>
using namespace std;

struct dstack{
int data;
dstack*next;
dstack*prev;	
};
 

dstack * top = NULL;
 
void push(int data){ 
	dstack  *temp = new dstack ;
	temp->data = data ;
	if(top == NULL) { top= temp ; }
	else{ 
 
	temp->next = top ;
	top->prev=temp;
	top=temp; 
 
}} 

void pop(){
	if(top==NULL){
		cout<<"the stack is empty";
	}
	else{
		top=top->next;
	}
}

void whatistop(){
	cout<<"the top is "<<top->data<<endl;
}

int main() {
	
	cout<<"jai shree ram"<<endl;
	push(10);
	push(20);
	pop();
	cout<<top->data;
	

	
	
	
	return 0;
}
