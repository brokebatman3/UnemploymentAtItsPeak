class Solution {
public:
 int help(int ind , int prev ,vector<int>& arr,vector<vector<int>> &dp){
        if(ind == arr.size())return 0;
            
        if(dp[ind][prev+1] != -1){
            return dp[ind][prev+1];
        }
        
        int nottake = help(ind+1,prev,arr,dp);
        int take =0;
        if(prev==-1 || arr[ind]>arr[prev]){
            take = 1+help(ind+1,ind,arr,dp);
        }
        return dp[ind][prev+1]=max(nottake,take);
    }
     int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        //APPROACH 1
        vector<vector<int>> dp(n+1,vector<int>(n+1,-1));
        return help(0,-1,nums,dp);
		}
    // int dp[2502][2502];
    // int func(vector<int>&nums  , int index ,int n , int prev , vector<vector<int>>&dp  ){
    //     if(index == n ){
    //         return 0; 
    //     }
    //     if( dp[prev+1][index] != -1){
    //         dp[prev+1][index]; 
    //     }
    //     int choice1= 0 ; 
    //     int choice2 = func(nums , index + 1 , n , prev,dp)   ; 
    //     if(  prev == -1 || nums[prev] < nums[index]){
    //         choice1 = 1 + func(nums , index + 1 , n , index,dp );
    //     }
        
    //         return dp[prev+1][index] =  max(choice1 ,choice2) ;
        

    // }
    // int lengthOfLIS(vector<int>& nums) {
    //     vector<vector<int>>dp(nums.size() + 1 , vector<int>(nums.size() + 1 , -1)); 
    //     int res = func(nums , 0 , nums.size() , -1  , dp ); 
        
    //     return res ;
    // }
};