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
    int sizeofLL(ListNode *head ){
        int c = 0;
        while(head){
            c++; 
            head = head ->next; 
        }
        return c ; 
    }
    ListNode* deleteMiddle(ListNode* head) {
        if(!head ){
            return 0 ; 
        }
        if(!head->next){
            return 0 ; 
        }
        int len = sizeofLL(head); 
        ListNode *trav = head; 
        for(int i = 1 ; i< len/2 ;i++){
            trav = trav->next; 
        }
        trav->next = trav->next->next ; 
        return head; 




    }
};