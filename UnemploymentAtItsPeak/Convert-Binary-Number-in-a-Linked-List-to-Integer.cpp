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
        curr->next = prev;  // Reverse the pointer
        prev = curr;         // Move prev forward
        curr = nextNode;     // Move curr forward
    }
    return prev; // New head
}
    int getDecimalValue(ListNode* t) {
        int mul =  1;
        int num = 0 ; 
         ListNode *head = reverseList(t );
        int i = 0 ;  
        while(head ){
            // cout<<head->val<<" "; 
            num += pow(2 , i++) * head->val ; 
            head = head ->next ;
        }
    return num ; 
    }
};