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
    vector<int>v ; 
    void func(TreeNode *root){
        if(root){
            func(root->left); 
            v.push_back(root->val); 
            func(root ->right); 
        }
        return ; 
    }
    vector<int> inorderTraversal(TreeNode* root) {
        func(root); 
        return v; 
    }
};