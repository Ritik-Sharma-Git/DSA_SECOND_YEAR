#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int value;
    node* next_key;
    node* prev_key;
    node(int input)
    {
        value=input;
        next_key=NULL;
        prev_key=NULL;
        return;
    }
};
class DeQueues
{
    node* head;
    node* tail;
    public:
    DeQueues()
    {
        head=NULL;
        tail=NULL;
    }
    void push_back(int value)
    {
        node *temp = new node(value);
        if(head==NULL&&tail==NULL){
            head=temp;
            tail=temp;
        }
       else{ 
        tail->next_key = temp ;
        tail = tail->next_key;
       }
    }
    void push_front(int value)
    {
         node *temp = new node(value);
        if(head==NULL&&tail==NULL){
            head=temp;
            tail=temp;
        }
        else{
        temp->next_key = head;
        head = temp;
    }}
    void pop_front()
    {
        if(head==NULL)cout<<"nothing to pop front "<<endl;
        else {head = head->next_key;}
      
    }
    void pop_back()
    {
        if(head==NULL)cout<<"nothing to pop from back "<<endl;
        else tail = tail->prev_key;
        
    }
    int get_front(){
        if(head==NULL)return -1;
        
    	return head->value;
    }
    int get_back(){
        if(head==NULL)return-1;
    	return tail->value;
    }
    void display_queue()
    {
        node* temp =  head;
        while(temp!=tail){
        cout<<temp->value<< " -> ";
        // cout<<"temp: " <<temp->value << " tail: " <<tail->value<<endl;
        temp=temp->next_key;
        
      
        }
        cout<<tail->value;
    }
    void display_tail(){
        cout<<tail->value;
    }
};
int main()
{
    DeQueues s;
    s.push_front(10);
    s.push_front(20);
    s.push_front(30);
    s.push_back(40);
    s.push_back(50);
    s.push_back(60);
    cout<<"front: "<<s.get_front()<<"\n";
    cout<<"back: "<<s.get_back()<<"\n";
    s.display_queue();
    // s.display_tail();
}
