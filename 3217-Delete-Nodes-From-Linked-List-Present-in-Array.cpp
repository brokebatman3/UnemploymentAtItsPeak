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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        sort(nums.begin(), nums.end());
        ListNode* t = head;
        ListNode* res = new ListNode(0);
        ListNode* tail = res;
       
        while (t != 0) {
            if (binary_search(nums.begin(), nums.end(), t->val)) {
                t = t->next;
            } else {
                ListNode* temp = new ListNode(t->val);
                tail->next = temp;
                tail = temp;
                t = t->next;
            }
        }
        return res->next ;
    }
};