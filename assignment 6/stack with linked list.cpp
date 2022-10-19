#include <iostream>
using namespace std;

struct node{
int data;
node*next;};

struct stack{
node *top = NULL ;
int size = 0;
} ;
node * top = NULL;

void push(int data){ 
	node  *temp = new node ;
	temp->data = data ;
	if(top == NULL) { top= temp ; }
	else{ 
	
	temp->next = top ;
	top=temp; 
	
}} 

void pop(){ 
       if( top=NULL )cout<<" no stack";
      else { 
    
     top=top->next;
    
      }
       	}
 
 void printdata( ){
 

 	cout<<top->data<<endl ;
 
 }     
 void size(){
 int count = 0;
 node *temp = top ;
 while (temp) {  
 	count ++;
 }
 cout<<count<<endl; }
     
      



int main() {
	// your code goes her
	cout<<"jai shree ram"<<endl;  
       push(10 ) ;
       push(20)  ; 
       push(30)  ; 
       
       
       printdata();
      
      pop()   ; 
      printdata()  ; 
         
            
            

	return 0;
}
