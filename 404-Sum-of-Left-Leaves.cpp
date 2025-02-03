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
    int res;
    void func(TreeNode* root) {
        if (!root) {
            return;
        }
        if (!root->left && !root->right) {
            return;
        }
        if(root->left ){

        if (!root->left->left && !root->left->right) {
            res += root->left->val;
        }
        }
        func(root->left);
        func(root->right);
        return;
    }
    int sumOfLeftLeaves(TreeNode* root) {
        res = 0;
        func(root);
        return res;
    }
};