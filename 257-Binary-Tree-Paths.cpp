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
    void func(TreeNode* root, vector<string>& v, string s) {
        if (!root) {
            return;
        }
        if (!root->left && !root->right) {
            s += to_string(root->val); 
            v.push_back(s);
            return;
        }
      
        // s.pop_back
        func(root->left, v, s + to_string(root->val) + "->");
        func(root->right, v,  s + to_string(root->val) + "->");
        // s.pop_back();
        return;
    }
    vector<string> binaryTreePaths(TreeNode* root) {

        string s = "";
        vector<string> res;
        func(root, res, s);
        return res;
    }
};