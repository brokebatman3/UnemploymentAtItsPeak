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
  pair<ListNode* , ListNode*> reverseList(ListNode* head) {
        if(!head){
            return {head , head}; 
        }
        ListNode *prev = 0 ; 
        ListNode *curr = head; 
        
        while(curr != 0  ){
            ListNode *nextt = curr ->next; 
            curr ->next = prev ; 
            prev = curr ; 
            curr = nextt ;   
          
        }
        ListNode*temp = prev ; 
        while(temp ->next != 0 ){
            temp = temp->next; 
        }
        return {prev , temp }; 
    }
    int sizeofLL(ListNode* head) {
        int count = 0;
        while (head) {
            count++;
            head = head->next;
        }
        return count;
    }
    ListNode* helper(ListNode* head, int k) {
        if (!head) {
            return 0;
        }
        int size = sizeofLL(head);
        if (size < k) {
            return head;
        }
        ListNode *temp = head; 
        for(int i = 1 ; i< k ; i++){
            temp = temp->next ; 
        }ListNode *tempNextt = 0 ;   
        if(temp && temp->next){

        tempNextt = temp->next ; 
        temp ->next = 0; 
        }
        pair<ListNode*,ListNode*>t = reverseList(head); 
        t.second ->next= helper(tempNextt , k ); 
        return t.first; 
        
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        return helper(head , k ); 
    }
};