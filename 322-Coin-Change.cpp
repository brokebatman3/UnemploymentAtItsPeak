class Solution {
public:
    vector<vector<int>>dp ; 
    int helper(vector<int>& v ,int amount ,int i ){
        if(amount == 0 )
        {
            return 0; 
        }
        if(amount < 0 ){
            return INT_MAX-100 ; 
        }
        if(dp[i][amount] != -1){
            return dp[i][amount]; 
        }
        if(i == v.size()){
            return INT_MAX-100; 
        }
        int x = 1 + helper(v , amount - v[i] , i + 1); 
        int y = helper(v , amount  , i + 1); 
        int b = 1 + helper(v , amount - v[i] , i ); 
        return dp[i][amount] = min(x ,min(y , b )); 
    }
    int coinChange(vector<int>& nums, int amount) {
        int n = nums.size() ; 
        if(amount <= 0  ){
            return 0; 
        }
        dp.resize(n + 1 , vector<int>(amount + 1 , -1 )); 
        return helper(nums , amount , 0 ) == INT_MAX - 100 ? -1 :helper(nums , amount , 0 ) ; 
    }
};