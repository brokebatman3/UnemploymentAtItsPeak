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
  vector<vector<int>> levelOrder(TreeNode* root) {
        if(!root ){
            return {}; 
        }
        queue<TreeNode*>q; 
        q.push(root); 
        vector<vector<int>> res ;
        while(!q.empty()){
            int size = q.size(); 
            vector<int> v ;
            for(int i = 0 ; i< size ; i++){
                TreeNode*t  = q.front(); 
                q.pop(); 
                v.push_back(t ->val); 
                if(t->left){
                    q.push(t->left); 
                }
                if(t ->right ){
                    q.push(t ->right); 
                }
            }
            res.push_back(v); 
        }
        return  res ; 
    }
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
     vector<vector<int>> v  = levelOrder(root ); 
     reverse(v.begin() , v.end());   
     return v; 
    }
};