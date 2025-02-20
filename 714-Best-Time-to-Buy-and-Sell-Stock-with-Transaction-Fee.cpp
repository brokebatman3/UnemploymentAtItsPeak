class Solution {
public:
    int func(vector<int>&v , int index  ,int fees , bool canbuy , vector<vector<int>>&dp){
        if(index == v.size()){
            return 0; 
        }
        if(dp[index][canbuy] != -1){
            return dp[index][canbuy]; 
        }
        if(canbuy){
            return dp[index][canbuy]  = max(func(v , index + 1 , fees , 1,dp) , -(v[index]+fees) + func(v, index+1 , fees , 0,dp )); 
        }
        else{
            return dp[index][canbuy]  = max(func(v , index + 1 , fees , 0,dp) , v[index] + func(v, index+1 , fees , 1,dp )); 
        }
        

    }
    int maxProfit(vector<int>& prices, int fee) {
        vector<vector<int>>dp(prices.size() + 1 , vector<int>(2 , -1)); 
        return func(prices , 0 , fee , 1 , dp); 
    }
};