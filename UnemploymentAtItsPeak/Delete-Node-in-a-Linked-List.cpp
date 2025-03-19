/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void swap(ListNode *val1 , ListNode*val2){
        int t = val2->val ;
        val2->val = val1->val ; 
        val1->val = t; 
    }
    void deleteNode(ListNode* node) {
        ListNode *t = 0; 
        while(node->next){
            swap(node , node->next); 
            t = node;
            node = node ->next;
        }
        t->next = 0; 
        delete(node); 
    }
};