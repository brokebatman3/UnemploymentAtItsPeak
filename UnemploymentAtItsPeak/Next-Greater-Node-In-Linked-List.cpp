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
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;

        while (curr) {
            ListNode* nextNode = curr->next; // Store next node
            curr->next = prev;               // Reverse the pointer
            prev = curr;                     // Move prev forward
            curr = nextNode;                 // Move curr forward
        }
        return prev; // New head
    }

    vector<int> nextLargerNodes(ListNode* head) {
        stack<int>st ;
        vector<int>res; 
        ListNode *head2 = reverseList(head); 
        while(head2){
                while(!st.empty() && st.top() <= head2->val){
                    st.pop(); 
                }
                if(!st.empty()){
                    res.push_back(st.top()); 
                }
                else{
                    res.push_back(0); 
                }
                st.push(head2->val);
            head2 = head2 ->next;
        }
        reverse(res.begin() , res.end());
        return res ;
    }
};