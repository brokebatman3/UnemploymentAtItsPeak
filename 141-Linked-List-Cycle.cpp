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
    bool hasCycle(ListNode *head) {
        if(!head ){
            return false; 
        }
        if(!head->next){
            return false; 
        }
        ListNode *slow = head ; 
        ListNode *fast= head->next ; 
        while(fast != slow && fast->next != 0 && fast->next->next != 0 ){
            fast = fast ->next ->next ; 
            slow = slow->next ;
        }
        if(fast->next  == 0  || slow->next  == 0 ){
            return false; 
        }
        if(fast == slow ){
            return true; 
        }
        return false; 
    }
};