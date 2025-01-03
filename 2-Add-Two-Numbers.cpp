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
   
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* x = l1;
        ListNode* y = l2;
        int carry = 0;
        ListNode* res = new ListNode(0);
        ListNode* ress = res;
        while (x != 0 && y != 0) {

            int sum = x->val + y->val + carry;
            // cout<< sum <<" ";
            carry = sum / 10;
            ListNode* t = new ListNode(sum % 10);
            res->next = t;
            res = res->next;
            x = x->next;
            y = y->next;
        }
        while (x != 0) {
            int sum = x->val + carry;
            carry = sum / 10;
            ListNode* t = new ListNode(sum % 10);
            res->next = t;
            res = res->next;
            x = x->next;
        }
        while (y != 0) {
            int sum = y->val + carry;
            carry = sum / 10;
            ListNode* t = new ListNode(sum % 10);
            res->next = t;
            res = res->next;
            y = y->next;
        }
        if (carry) {
            ListNode* t = new ListNode(carry);
            res->next = t;
        }
        return ress->next;
    }
};
