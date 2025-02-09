class Solution {
public:
    vector<int>dp ; 
    int func(vector<int>&nums ,int target , int x , int index ){
        if(index == nums.size()){
            if(target == x){
                return 1; 
            }
            return 0; 
        }
        if(dp[index] != -1){
            dp[index]; 
        }
        int case1 = func(nums , target  ,x + nums[index] , index +1 ); 
        int case2 = func(nums , target  , x - nums[index], index +1 ); 
        return dp[index] =  case1 + case2; 

    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int x = 0; 
        dp.resize(nums.size()+1 , -1); 
        return func(nums , target  ,x , 0   ); 
    }
};