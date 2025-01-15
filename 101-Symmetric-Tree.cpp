/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool func(TreeNode *root1 , TreeNode *root2){
        if(!root1 && !root2 ){
            return 1; 
        }
        if(root1 ==0 || root2 == 0 )
        {
            return 0 ; 
        }
        else{
            bool f = root1 ->val == root2 ->val ; 
            bool left = func(root1 ->left , root2 ->right); 
            bool right= func(root1 ->right, root2 ->left);
            return f && left && right;  
        }
        
    }
    bool isSymmetric(TreeNode* root) {
      return func(root , root); 
    }
};