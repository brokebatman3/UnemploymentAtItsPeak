
class Solution {
public:
    vector<int> secondGreaterElement(vector<int>& nums) {
        // jai shri ram
        stack<int> st1;
        using pi = pair<int, int>;
        priority_queue<pi, vector<pi>, greater<pi>> st2;
        int n = nums.size();
        vector<int> ans(n, -1);
        st1.push(0);
        for (int i = 1; i < n; i++) {
            while (st2.size() > 0 && st2.top().first < nums[i]) {
                ans[st2.top().second] = nums[i];
                st2.pop();
            }
            while (st1.size() > 0 && nums[st1.top()] < nums[i]) {
                st2.push({nums[st1.top()], st1.top()});
                st1.pop();
            }
            st1.push(i);
        }
        return ans;
    }
};
