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
    ListNode* removeElements(ListNode* head, int val) {
        if (!head) {
            return 0;
        }
        ListNode* res = new ListNode(0);
        ListNode* tail = res;
        ListNode* t = head;
        while (t) {
            if (t->val != val) {
                ListNode* temp = new ListNode(t->val);
                tail->next = temp;
                tail = tail ->next ; 
            }
            t = t->next;
        }
        return res->next ;
    }
    
};