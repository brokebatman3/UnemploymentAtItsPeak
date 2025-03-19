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
    int sizeofLinkedList(ListNode *head ){
        if(!head ){
            return 0; 
        }
        int x = 0 ;
        while(head != 0){
            x++; 
            head = head ->next ; 
        }
        return x ; 
    }
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head ){
            return 0 ; 
        }
        if(k == 0 || !(head ->next)){
            return head ;
        }

        int size = sizeofLinkedList(head ); 
        int x = k % size; 
        if(x == 0 ){
            return head ;
        }
        int i = 0; 
        ListNode *head2 = head ;
        ListNode *y = 0; 
        while(head2 && i < (size-x)){
            y = head2; 
            head2 = head2 ->next; 
            i++; 
        }
        if(y){
            y ->next = 0 ; 
        }
        ListNode *res = head2 ;
        while(head2 ->next != 0 ){
            head2 = head2 ->next; 
        }
        head2->next = head ; 
        head = res ;

        return head;



    }
};