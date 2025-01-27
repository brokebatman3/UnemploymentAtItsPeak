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
    int sum;
    vector<int> v;
    void func(TreeNode* root, int& sum) {
        if (!root) {
            // sum = 0 ;
            return;
        }
        sum += root->val;
        func(root->left, sum);
        func(root->right, sum);
        if (!root->left && !root->right) {
            v.push_back(sum);
            // return ;
        }
        sum -= root->val;
        // return;
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        sum = 0;
        // v.push_back(0); 
        func(root, sum);
        for (auto x : v) {
            if(x == targetSum){
                return 1; 
            }
        }
        return 0;
    }
};