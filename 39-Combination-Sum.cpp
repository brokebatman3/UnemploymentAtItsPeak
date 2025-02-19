class Solution {
public:
    void func(vector<int>& v, int index, int target, int sum, vector<int>& x , vector<vector<int>>&res) {
        if (sum == target) {
            res.push_back(x);
            return;
        }
        if (sum > target || index >= v.size()) {
            return;
        }
        x.push_back(v[index]);
        func(v, index, target, sum + v[index], x , res);
        x.pop_back();
        func(v, index + 1, target, sum, x , res);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> x;
    vector<vector<int>> res;
        func(candidates, 0, target, 0, x , res);
        return res;
    }
};