class Solution {
public:
int solve(int i, int n, vector<int>& nums, vector<int>& dp){
    if(i > n){
        return 0;
    }
    if(dp[i] != -1){
        return dp[i];
    }
    int add = nums[i]+solve(i+2,n,nums,dp);
    int remove = 0+solve(i+1,n,nums,dp);
    dp[i] = max(add,remove);
    return dp[i];
}
    int rob(vector<int>& nums) {
        int n= nums.size();
        if(n == 1){
            return nums[0];
        }
        if(n == 2){
            return max(nums[0],nums[1]);
        }
        vector<int>dp1(n,-1);
        vector<int>dp2(n,-1);
        return max(solve(0,n-2,nums,dp1),solve(1,n-1,nums,dp2));
    }
};







// class Solution {
//0 public:
//     int func(vector<int> &nums , int i , vector<int>&dp , int n  ){
//         if(i > n ){
//             return  0; 
//         }
//         if(dp[i] != -1){
//             return dp[n]; 
//         }
//         int inc = nums[i] + func(nums , i + 2 , dp , n  ); 
//         int exl = 0 + func(nums , i + 1 , dp , n );
//          dp[i] = max(inc , exl); 
//          return dp[i]; 

//     }
//     int rob(vector<int>& nums) {
//         int n = nums.size(); 
//         if(n == 1){
//             return  nums[0]; 
//         }
//         if(n ==2){
//             return max(nums[0 ] , nums[1]); 
//         }
//         vector<int>dp1(n  , -1); 
//         vector<int>dp2(n  , -1);
//         return  max(func(nums , 0 , dp1 , n-2) , func(nums , 1 , dp2 , n-1));
//     }
// };