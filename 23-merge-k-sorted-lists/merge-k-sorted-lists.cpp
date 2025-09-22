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
     ListNode* insertionSortList(ListNode* head) {
        ListNode* dummy = new ListNode(0);
        dummy -> next = head;
        ListNode *pre = dummy, *cur = head;
        while (cur) {
            if ((cur -> next) && (cur -> next -> val < cur -> val)) {
                while ((pre -> next) && (pre -> next -> val < cur -> next -> val)) {
                    pre = pre -> next;
                }
                ListNode* temp = pre -> next;
                pre -> next = cur -> next;
                cur -> next = cur -> next -> next;
                pre -> next -> next = temp;
                pre = dummy;
            }
            else {
                cur = cur -> next;
            }
        }
        return dummy -> next;
    }
    ListNode *func(vector<ListNode*>&x ){
        ListNode *res = new ListNode(INT_MIN); 
        ListNode *curr = res ; 
        for(int i = 0 ; i < x.size() ; i++){
            ListNode *head = x[i];
            while(head){
                ListNode *t = new ListNode(head->val); 
                curr ->next = t ; 
                curr = curr->next; 
                head = head ->next; 
            } 
        }
        return res ; 
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        return insertionSortList(func(lists))->next ; 
    }
};