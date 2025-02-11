class Solution {
public:
    int func(vector<int>& v, bool f) {
        if (v.size() == 1) {
            return v[0];
        }
        vector<int> dp(v.size(), 0);
        dp[0] = v[0]*0;
        dp[1] = max(v[0]*0, v[1]*1);
        for (int i = 2; i < v.size(); i++) {
            dp[i] = max(dp[i - 1], v[i]*i + dp[i - 2]);
        }
        return dp[v.size() - 1];
    }
    int deleteAndEarn(vector<int>& nums) {
        int n = *max_element(nums.begin() , nums.end()); 
        vector<int> v(n +1 , 0 ); 
        for(int i  =0 ; i < nums.size() ; i++ ){
            v[nums[i]]++; 
        }
        return func(v , 0 ); 
    } 
};