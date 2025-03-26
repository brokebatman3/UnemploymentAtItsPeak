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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if (!root) {
            return {};
        }
        vector<vector<int>> res;
        TreeNode* x = root;
        queue<TreeNode*> q;
        q.push(x);
        while (!q.empty()) {
            vector<int> temp;
            int len = q.size();
            for (int i = 0; i < len; i++) {

                temp.push_back(q.front()->val);
                if (q.front()->left) {
                    q.push(q.front()->left);
                }
                if (q.front()->right) {
                    q.push(q.front()->right);
                }
                q.pop();
            }

            res.push_back(temp);
        }
        return res;
    }
    vector<double> averageOfLevels(TreeNode* root) { 
        vector<vector<int>> v = levelOrder(root);
        vector<double>res; 
        for(int  i = 0 ; i < v.size() ; i++){
            long long int sum = 0 ; 
            for(int j = 0 ; j < v[i].size() ; j++){
                sum  += v[i][j]; 
            }
            res.push_back((double)sum/v[i].size());
        }
        return res; 
    
    
    
    
    
    
    
    }
};