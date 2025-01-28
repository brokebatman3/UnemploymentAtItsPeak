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
    int c ; 
   vector<long long int > func(TreeNode* root ) {
        if (!root) {
            return {};
        }
vector<long long int > res;
        TreeNode* x = root;
        queue<TreeNode*> q;
        q.push(x);
        while (!q.empty()) {
        c++; 
            int len = q.size();
            long long int sum = 0 ; 
            for (int i = 0; i < len; i++) {

                sum +=(long long int) q.front()->val; 
                if (q.front()->left) {
                    q.push(q.front()->left);
                }
                if (q.front()->right) {
                    q.push(q.front()->right);
                }
                q.pop();
            }

            res.push_back(sum);
        }
        sort(res.begin() , res.end() , greater<>()); 
        
        return res;
    }
    long long kthLargestLevelSum(TreeNode* root, int k) {
        c = 0 ; 
        vector<long long int> res = func(root); 
       if(k <= c  ){
        return res[k-1]; 
       }
       return -1; 
    }
};