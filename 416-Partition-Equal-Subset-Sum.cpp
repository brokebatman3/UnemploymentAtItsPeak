class Solution {
public:
    bool func(vector<int>& v, int total_sum, int curr_sum, int index ,vector<vector<int>>&dp) {
        if (total_sum == curr_sum) {
            return 1;
        }
        if(total_sum < curr_sum ){
            return 0;
        }
        if (index == v.size()) {
            return 0;
        }
        if(dp[index][curr_sum] != -1){
            return dp[index][curr_sum] ; 
        }
        curr_sum = (curr_sum + v[index]); 
        total_sum = (total_sum - v[index]); 
        bool x = func(v, total_sum , curr_sum , index + 1 , dp);
        curr_sum = (curr_sum - v[index]); 
        total_sum = (total_sum + v[index]); 
        bool y = func(v, total_sum , curr_sum , index + 1,dp);

        return dp[index][curr_sum] = x || y;
    }
    bool canPartition(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int sum = accumulate(nums.begin(), nums.end(), 0);
        if (sum % 2 != 0) {
            return 0;
        }
            vector<vector<int>>dp(nums.size() + 1  , vector<int>(sum +1 , -1)); 
        int curr_sum= 0 ; 
        return func(nums, sum, curr_sum , 0 , dp);
    }
};