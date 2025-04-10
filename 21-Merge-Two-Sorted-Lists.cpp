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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* res = new ListNode(0);
        ListNode* trav = res;
        while (list1 && list2) {
            if (list1->val <= list2->val) {
                ListNode* t = new ListNode(list1->val);
                list1 = list1->next;
                trav->next = t;
            } else {
                ListNode* t = new ListNode(list2->val);
                list2 = list2->next;
                trav->next = t;
            }
            trav = trav->next;
        }
        while (list1) {
            ListNode* t = new ListNode(list1->val);
            list1 = list1->next;
            trav->next = t;
            trav = trav->next;
        }
        while (list2) {
            ListNode* t = new ListNode(list2->val);
            list2 = list2->next;
            trav->next = t;
            trav = trav->next;
        }
        return res->next;
    }
};