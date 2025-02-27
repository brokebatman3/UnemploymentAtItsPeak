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
    
    ListNode* oddEvenList(ListNode* head) {
        ListNode *head1  = new ListNode(0); 
        ListNode *tail1 = head1; 
        ListNode *head2 = new ListNode(0);
        ListNode *tail2 = head2; 
        bool f = 1;  
        while(head){
            ListNode *temp = new ListNode(head->val); 
            if(f ){
                tail1->next = temp ; 
                tail1 = tail1->next ; 
                f = 0 ; 
            }
            else{
                tail2->next = temp ; 
                tail2 = tail2->next ; 
                f = 1; 
            }
            head = head ->next;  
        } 
        tail1 = head1; 
        while(tail1->next){
            tail1 = tail1->next; 
        }
        tail1->next = head2->next;
        return head1->next;

    }
};