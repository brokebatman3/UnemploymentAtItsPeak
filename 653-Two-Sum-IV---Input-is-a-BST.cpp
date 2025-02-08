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
    void func(TreeNode* root, vector<int>& v) {
        if (root) {
            func(root->left, v);
            v.push_back(root->val);
            func(root->right, v);
        }
        return;
    }
    bool findTarget(TreeNode* root, int k) {
        vector<int> v;
        func(root , v ); 
        int i = 0 , j = v.size()-1;
        while(i < j ){
            if(v[i] + v[j] == k ){
                return true; 
            }
            else if(v[i] + v[j] > k ){
                j--;
            }
            else{
                i ++ ; 
            }
        }
        return 0; 


    }
};