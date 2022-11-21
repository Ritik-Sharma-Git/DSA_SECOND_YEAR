#include <iostream>
using namespace std;

struct Node{
	int data;
	Node *next;
};


//complete the functions

class Queue{
	Node *head;
	Node *tail;
	int s;
	
	public:
	//constructor is called whenever an object of the class is declared
	Queue(){
		cout<<"constructor is Called\n";
		s=0;
		head=NULL;
		tail=NULL;
	}
	
	//push the value at the back
	void push(int val){
		cout<<"pushing the val: "<<val<<" at the back of queue\n";
		Node *temp = new Node;
    	temp->data = val;
    	temp->next=NULL;
    	if(head==NULL){
    		head=temp;
    		tail=temp;
    	}
    	tail->next=temp;
    	tail=temp;
    	s++;
	}
	
	int front(){
		cout<<"returning the value at front\n";
		return head->data;
	}
	
	void pop(){
		cout<<"removing the first element\n";
		Node *ptr=head;
		head=head->next;
		free(ptr);
		s--;
		
	}
	
	int size(){
		cout<<"return the size of the queue\n";
		return s;
	}
	
	bool isEmpty(){
		cout<<"returning if the queue is empty\n";
		if(s){
		    return false;	
		}
		return true;
	}
};

int main() {
	Queue q; //constructor is called on this line
	q.push(4);
	cout<<"front: "<<q.front()<<"\n";
	q.pop();
	cout<<"size: "<<q.size()<<"\n";
	cout<<"empty: "<<q.isEmpty()<<"\n";
	
	q.push(5);
	q.push(3);
	cout<<"front: "<<q.front()<<"\n";
	q.pop();
	cout<<"size: "<<q.size()<<"\n";
	cout<<"empty: "<<q.isEmpty()<<"\n";
	
	cout<<"front: "<<q.front()<<"\n";
	q.pop();
	cout<<"size: "<<q.size()<<"\n";
	cout<<"empty: "<<q.isEmpty()<<"\n";
	return 0;
}
