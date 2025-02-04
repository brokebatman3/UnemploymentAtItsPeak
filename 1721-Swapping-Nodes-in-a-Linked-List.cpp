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
    int sizeofLL(ListNode* head) {
        int c = 0;
        while (head) {
            c++;
            head = head->next;
        }
        return c;
    }
    ListNode* swapNodes(ListNode* head, int k) {
        int len = sizeofLL(head); 
        ListNode *trav = head ; 
        ListNode *x ; 
        ListNode *y ; 
        for(int i = 0 ; i < len ; i++){
            if(i == k-1){
                x = trav; 
            }
            if(i == len-k){
                y = trav; 
            }
            trav = trav ->next ; 
        }
        int t = x->val;  
        x->val = y->val ; 
        y->val  = t ;
        return head ;


    }
};