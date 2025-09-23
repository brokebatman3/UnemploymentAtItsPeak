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
    ListNode*merge(ListNode *l1 , ListNode *l2){
        ListNode *res = new ListNode(0); 
        ListNode *curr = res; 
        while(l1 && l2){
            if(l1->val < l2->val ){
                curr->next = l1 ;
                l1 = l1->next;  
            }
            else{
                curr->next = l2 ;
                l2 = l2->next;  
            }
            curr = curr ->next; 
        }
        curr->next = l1 ? l1 : l2;
        return res ->next;
    }
    ListNode* func(vector<ListNode*> x , int start , int end){
        if(start == end ){
            return x[start];
        }
        if(start + 1  == end){
            return merge(x[start] , x[end]); 
        }
        int mid = start + (end-start)/2;
        ListNode *left = func(x , start , mid); 
        ListNode *right = func(x , mid +1 , end); 
        return merge(left , right); 
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size() == 0 ){
            return 0 ; 
        }
        return func(lists , 0 , lists.size()-1); 
    }
};