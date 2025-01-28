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
vector<int>res; 
    void func(TreeNode *root){
        if(root ){
            res.push_back(root ->val); 
            if(root ->left){

            func(root ->left); 
            }
            if(root ->right){

            func(root ->right); 
            }
        }
        return ; 
    }

    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> x ; 
        res = x ; 
        func(root); 
        return res ; 
    }
};