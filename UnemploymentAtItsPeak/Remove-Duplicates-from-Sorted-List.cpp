/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head){
            return 0; 
        }
        if(!head->next){
            return head;
        }
        if(!(head->next->next)){
            if(head->val == head->next ->val ){
                return head->next ; 
            }
            else{
                return head; 
            }
        }
       ListNode* x = head ; 
       while(x != 0 && x->next != 0 ){
       ListNode *y = x->next ;
       while(y!= 0 &&y->val == x->val ) {
        y = y ->next; 
       }
       x ->next = y ; 
       x= x ->next; 
       }
      if(head ->next){
        if(head->val == head->next->val){
            return head->next; 
        }
        
      }
      return head;

    }
};