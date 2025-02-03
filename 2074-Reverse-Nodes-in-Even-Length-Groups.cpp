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
    vector<vector<ListNode*>> helper(ListNode* head) {
        vector<vector<ListNode*>> v;
        int n = sizeofLL(head);
        ListNode* trav = head;
        for (int i = 1; i <= n; i++) {
            vector<ListNode*> t;
            for (int j = 0; j < i && trav != 0; j++) {
                t.push_back(trav);
                trav = trav->next;
            }
            if(t.size() %2 ==  0 ){

            reverse(t.begin(), t.end());
            }

            v.push_back(t);
        }
        return v;
    }
    int sizeofLL(ListNode* head) {
        int c = 0;
        while (head) {
            c++;
            head = head->next;
        }
        return c;
    }
    ListNode* buildLinkedList(vector<vector<ListNode*>> v) {
        ListNode* res = new ListNode(0);
        ListNode* tail = res;
        for (int i = 0; i < v.size(); i++) {
            for (int j = 0; j < v[i].size(); j++) {
                ListNode* t = new ListNode(v[i][j]->val);
                tail->next = t;
                tail = tail->next;
            }
        }
        return  res->next; 
    }

    ListNode* reverseEvenLengthGroups(ListNode* head) {


return buildLinkedList(helper(head)); 


     }
};