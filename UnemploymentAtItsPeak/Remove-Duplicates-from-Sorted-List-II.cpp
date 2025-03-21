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
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head ){
            return 0 ;
        }
        if(!head ->next){
            return head ;
        }
        map<int,int>m ;
        while(head != 0){
            m[head->val ]++; 
            head = head ->next; 
        }
        ListNode *res = new ListNode(0) ;
        ListNode *tail = res ; 
        for(auto x : m ){
            if(x.second == 1){
                ListNode *t = new ListNode(x.first); 
                tail ->next = t; 
                tail = t; 
            }
        }
        return res ->next; 


    }
};