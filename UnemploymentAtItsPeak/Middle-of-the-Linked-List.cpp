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
    int size(ListNode* head) {
        int count = 0;
        while (head) {
            count += 1;
            head = head->next;
        }
        return count;
    }
    ListNode* middleNode(ListNode* head) {
        ListNode* x = head->next;
        ListNode* y = head;
        while (x && x->next) {
            y = y->next;
            x = x->next;
            if (x->next != 0) {
                x = x->next;
            }
        }
        return size(head) %2 == 0 ? y ->next : y  ;
    }
};