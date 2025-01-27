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
    void func(TreeNode* root, vector<TreeNode*>& v) {
        if (root) {
            v.push_back(root);
            func(root->left, v);
            func(root->right, v);
        }
        return;
    }
    TreeNode * modifier( vector<TreeNode*>& v) {
        int n = v.size(); 
        for (int i = 0; i < n-1 ; i++) {
            v[i]->right = v[i + 1];
            v[i]->left = 0;
        }
        v[n-1]->right = 0;
        v[n-1]->left = 0;
        return v[0];
    }
    void flatten(TreeNode* root) {
        if(!root){
            return ; 
        }
        vector<TreeNode*> v;
        func(root, v);
        root = modifier(v);
        // for(auto x : v ){
        //     cout<< x->val <<" "; 
        // }
        return;
    }
};