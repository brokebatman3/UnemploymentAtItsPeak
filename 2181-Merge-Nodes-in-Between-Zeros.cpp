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
    ListNode* mergeNodes(ListNode* head) {
        vector<int> v;
        ListNode* x = head;
        while (x != 0) {
            v.push_back(x->val);
            x = x->next;
        }
        ListNode* res = new ListNode(0);
        ListNode* tail = res;
        int i = 0, j = 0;
        int n = v.size();
        while (i < n && j < n) {
            int sum = 0;
            while (v[i] != 0) {
                sum += v[i];
                i++;
            }
            while (v[j] != 0 && i != j) {
                j++;
            }
            i++ , j++; 
            ListNode* t = new ListNode(sum);
            tail->next = t;
            tail = tail->next;
        }
        while(res != 0 && res->val == 0  ){
            res = res->next; 
        }
        return res ;
    }
};