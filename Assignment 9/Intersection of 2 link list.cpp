class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_map<ListNode*,int>map;
        ListNode* ptr=headA;
        while(ptr!=NULL){
            map[ptr]++;
            ptr=ptr->next;
        }  
        while(headB!=NULL){
            if(map[headB]==1){
                return headB;
            }
            headB=headB->next;
        } 
        if(headA==headB)
           return headB;
        return NULL;
        }
          
   
};
