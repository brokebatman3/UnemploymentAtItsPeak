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
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    bool func(ListNode* head, TreeNode* root) {
        if(!root){
            return 0; 
        }
        if (head->val != root->val) {
            return 0;
        }
        if (!head->next) {
            return 1;
        }
        
        bool left_sub , right_sub  ;

        if (root->left && head->next && root->left->val == head->next->val) {
            left_sub = func(head->next , root->left);
        }
        if (root->right && head->next && root->right->val == head->next->val) {
            right_sub = func(head->next , root->right);
        }
        return (left_sub | right_sub);
    }
    bool isSubPath(ListNode* head, TreeNode* root) {
        if(!root ){
            return 0; 
        }
        if(head->val == root->val ){
                if(func(head , root)){
                    return 1;
                }
        }
        return isSubPath(head, root->left ) | isSubPath(head, root->right ) ;
    }
};