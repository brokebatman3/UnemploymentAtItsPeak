class Solution {
public:
    int dp[301][5001];
    int func(vector<int>& nums, int i, int amount) {
        if (i == nums.size()) {
            return 0;
        }
        if (amount == 0) {
            return 1;
        }
        if (amount < 0) {
            return 0;
        }
        if (dp[i][amount] != -1) {
            return dp[i][amount];
        }
        int case1, case2;

        case1 = func(nums, i, amount - nums[i]);
        case2 = func(nums, i + 1, amount);

        return dp[i][amount] = case1 + case2;
    }
    int change(int amount, vector<int>& coins) {
        memset(dp , -1 , sizeof(dp)); 
        return func(coins, 0, amount);
    }
};