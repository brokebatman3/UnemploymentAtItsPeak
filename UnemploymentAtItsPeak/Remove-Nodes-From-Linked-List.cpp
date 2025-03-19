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
    void func(ListNode* head, stack<int>& st) {
        if (head) {
            func(head->next, st);
            if(st.empty()){
                st.push(head->val); 
            }
            else if( head->val >= st.top()) {
                st.push(head->val);
            }
        }
        return;
    }
    ListNode* removeNodes(ListNode* head) {
        stack<int> st;
        func(head, st);
        ListNode *res= new ListNode(0);
        ListNode *tail = res ; 
        while (!st.empty()) {
            ListNode *t =  new ListNode(st.top()); 
            tail->next = t; 
            tail = tail ->next; 
            st.pop(); 
        }
        return res ->next;
    }
};