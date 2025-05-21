class Solution {
public:
    int dp[2501][2501];
    int func( vector<int>&v , int i , int prev ){
        if(i == v.size()){
            return 0; 
        }
        if(dp[i][prev+1] != -1){
            return dp[i][prev+1]; 
        }
        int c2 =  func(v, i +1 , prev);
        int  c1 = 0 ; 
        if(prev == -1 || v[prev] < v[i]){
            c1=  1 + func(v,  i + 1 , i); 
        }
        return dp[i][prev+1] = max(c1,c2) ;  
    }

    int lengthOfLIS(vector<int>& nums) {
        memset(dp , -1 , sizeof(dp));
        return func(nums , 0 , -1); 
    }
};