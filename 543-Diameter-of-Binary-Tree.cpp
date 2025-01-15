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
    int res ; 
    int func(TreeNode *root){
        if(root){
          int lefth = func(root ->left); 
          int righth = func(root ->right); 
          res = max(res , lefth+righth); 
          return 1 + max(lefth,righth); 
            
        }
        return 0; 
    }
    
    int diameterOfBinaryTree(TreeNode* root) {
        res = 0 ; 
        func(root); 
        return res ; 
    }
};