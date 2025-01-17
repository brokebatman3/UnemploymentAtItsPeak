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
    int sizeofLL(ListNode* head) {
        if (!head) {
            return 0;
        }
        int count = 0;
        while (head) {
            count++;
            head = head->next;
        }
        return count;
    }
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
        int size1 = sizeofLL(headA);
        int size2 = sizeofLL(headB);
        int diff = size1 - size2;
        ListNode* t = headA;
        ListNode* t2 = headB;
        if (diff == 0) {
            while (t != t2) {
                t = t->next;
                t2 = t2->next;
            }
        } else if (diff > 0) {
            while (diff) {
                t = t->next;
                diff--;
            }

            while (t != t2) {
                t = t->next;
                t2 = t2->next;
            }
        } else {
            while (diff) {
                t2 = t2->next;
                diff++;
            }
            while (t != t2) {
                t = t->next;
                t2 = t2->next;
            }
        }
        return t == t2 ? t2 : 0;
    }
};