SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* llist) {
    SinglyLinkedListNode *slow = llist;
    SinglyLinkedListNode *fast = llist->next;
    while(fast){
        if(slow->data!=fast->data){
            slow= slow->next;
            fast=fast->next;
        }
        else {
        while (slow->data==fast->data && fast) {
            SinglyLinkedListNode *temp = fast->next;
            cout<<temp<<endl;
            if(temp==0){

                fast=NULL;
                slow->next=fast;
                break;
            }else{
            slow->next=temp;
            fast=temp;
            }
        
        }
        }
    }
    return llist;

}
