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
    void printLL(ListNode *head ){
        while(head ){
            cout<<head ->val <<" "; 
            head = head ->next; 
        }
        cout<<endl; 
        return ; 
    }
    ListNode* func(ListNode* head) {
        ListNode* prev = 0;
        ListNode* curr = head;
        while (curr != 0) {
            ListNode* forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
        }
        return prev;
    }
    ListNode * copyLL(ListNode *head ){
        ListNode *res = new ListNode(0); 
        ListNode *curr = res ; 
        while(head ){
            ListNode *t = new ListNode(head ->val ); 
            curr ->next  = t; 
            curr = curr ->next; 
            head = head ->next ; 
        }
        return res; 
    }
    bool isPalindrome(ListNode* head) {
        ListNode *l1 = head ;
        ListNode *l2 = func(copyLL(head)); 
        while(l1 && l2){
            if(l1->val == l2->val ){
                l1 = l1->next ;  
                l2 = l2->next ; 
                
            }
            else{
                return 0; 
            }
        }
        // if(l1 || l2 ){
        //     return 0; 
        // }
        return 1; 
    }
};