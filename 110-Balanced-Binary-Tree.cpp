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
    
    int  func(TreeNode *root ){
        if(root){
            int  x = func(root->left); 
            int y = func(root->right);
            return 1 + max(x , y) ;  
        }
        return 0; 
    }
    void helper(map<TreeNode*,pair<int,int>> &m , TreeNode *root){
        if(root){
            helper(m, root->left); 
            helper(m,root->right);
            pair<int,int> t = {func(root->left ),func( root->right)}; 
            m.insert({root ,t}); 
            return ;  
        }
        return ; 
    }
    bool isBalanced(TreeNode* root) {
        map<TreeNode* ,pair<int,int>>m ;
        helper(m , root); 
        for(auto x : m ){
            
            if(abs(x.second.first - x.second.second ) > 1){
                return 0; 
            } 
        }
        return 1;
        
    }
};