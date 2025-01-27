/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(!root){
            return 0 ;

            
        }
        vector<vector<Node*>> v;
        queue<Node*> q;
        q.push(root);
        while (!q.empty()) {
            int len = q.size();
            vector<Node*> temp;
            for (int i = 0; i < len; i++) {
                temp.push_back(q.front());
                if (q.front()->left) {
                    q.push(q.front()->left);
                }
                if (q.front()->right) {
                    q.push(q.front()->right);
                }
                q.pop();
            }
            v.push_back(temp);
        }

        for (int i = 0; i < v.size(); i++) {
            for (int j = 0; j < v[i].size() - 1; j++) {
                v[i][j]->next = v[i][j + 1];
            }
            v[i][v[i].size() - 1]->next = 0; 
        }

        return root;
    }
};