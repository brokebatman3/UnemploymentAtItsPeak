class Solution {
public:
    int count = 0;
    int func(vector<int>&v , int target, int sum , vector<int>&dp ) {
        if (target < sum) {
            return 0;
        }
        if (target == sum) {
        
            return 1;
        }
        if(dp[sum] != -1){
            return dp[sum]; 
        }
        int ans = 0 ; 
        for(int i = 0 ; i<v.size() ; i++){
            ans += func(v ,target , sum + v[i] , dp); 
        }
        return dp[sum] = ans; 
         
    }
    int combinationSum4(vector<int>& nums, int target) {
        vector<int>dp(target+ 1 , -1); 
        return func(nums  , target , 0 , dp );
    }
};