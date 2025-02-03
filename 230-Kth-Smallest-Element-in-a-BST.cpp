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
    void func(TreeNode *root , int k , vector<int>&q){
        if(!root){
            return ; 
        }
        func(root->left , k , q); 
        q.push_back(root->val); 
        func(root->right , k , q); 
        return ; 




    }
    int kthSmallest(TreeNode* root, int k) {
        vector <int> q;
        func(root , k , q); 
      
       return  q[k-1];
    }
};