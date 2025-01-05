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
    int sizeofLL(ListNode *t ){
        int count = 0 ; 
        while(t){
            count++; 
            t = t->next; 
        }
        return count ; 
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(!head ){
            return head; 
        }
        if(!head->next ){
            return 0; 
        }

        int size = sizeofLL(head); 
        if(size < n ){
            return head; 
        }
        ListNode *prev = 0 ; 
        ListNode *curr = head; 
        ListNode *forward = head ->next ; 
        for(int i = 0 ; i < abs(size-n)  ; i++){
            prev = curr ; 
            curr = forward ; 
            forward = forward ->next; 
        }
        if(prev){

        prev->next = forward ;
        return head ;  
        }
        
        return head->next; 



    }
};