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
      void Mergesorting(ListNode **head ){
        ListNode *curr= *head ; 
        if(!curr || !curr ->next ){
            return ; 
        }
        ListNode *first = 0   ; 
         ListNode *second  = 0 ; 
       FindMiddle(curr, &first , & second ); 
        Mergesorting(&first); 
        Mergesorting(&second); 
       *head = mergeboth(first , second ); 
     
    }
    void FindMiddle(ListNode *curr , ListNode **first , ListNode **second){
        
        ListNode *slow = curr; 
        ListNode *fast  = curr->next;
        while(fast != 0 ){
            fast = fast ->next ; 
            if(fast != 0 ){
                slow = slow ->next ; 
                fast = fast ->next; 
            }
        } 
        *first = curr; 
        *second = slow ->next; 
        slow ->next =  0 ; 
    }
    ListNode *mergeboth(ListNode *first , ListNode *second ){
        if(!first){
            return second ; 
        }
        if(!second){
            return first;
        }
        ListNode *answer = 0 ; 
        if(first ->val <= second ->val){
            answer = first; 
            answer ->next = mergeboth(first ->next , second ); 
        }
        else{
              answer = second; 
            answer ->next = mergeboth(first  , second ->next);
        }



return answer; 


    }

    ListNode* sortList(ListNode* head) {
         Mergesorting(&head); 
        return head; 
    }
};