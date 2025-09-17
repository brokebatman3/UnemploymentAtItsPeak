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
    void func(TreeNode*root ,int &count){
        if(root){
            count+= 1;
            func(root->left , count); 
            func(root->right,count); 
            return ; 
        }
        return ; 
    }
    int countNodes(TreeNode* root) {
        int res = 0 ; 
        func(root , res); 
        return res;
    }
};