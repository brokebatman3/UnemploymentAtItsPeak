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
    vector<vector<int>>res; 
    void func(TreeNode *root , vector<int> &v , int &sum , int &target){
        if(!root ){
            return ; 
        }
        sum += root->val ; 
        v.push_back(root->val ); 
        func(root ->left , v , sum, target ); 
        func(root ->right , v , sum , target); 
        if(!root->left && !root->right){
            if(sum == target){
                res.push_back(v); 
            }
        }
        sum-= root->val ; 
        v.pop_back(); 
        return ; 

    }
    vector<vector<int>> pathSum(TreeNode* root, int target) {
        int sum = 0 ; 
        vector<int> v; 
        func(root , v , sum , target ); 
        return res; 
    }
};