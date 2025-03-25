class Solution {
public:
    int dp[501][501]; 
    int func(vector<int>&v1, vector<int>v2 , int i , int j ){
        if(i == v1.size() || j==v2.size()){
            return 0; 
        }
        if(dp[i][j] != -1){
            return dp[i][j]; 
        }
        int count = 0 ; 
        if(v1[i] == v2[j]){
            count = 1 + func(v1 , v2 , i+1 , j+1); 
        }
        else{
            count += max(func(v1 , v2 , i , j+1) , func(v1 , v2 , i+1 , j)); 
        }
        return dp[i][j] =  count;
    }
    int maxUncrossedLines(vector<int>& v1, vector<int>& v2) {
        memset(dp , -1 , sizeof(dp)); 
        int res = func(v1,v2,0,0); 
        return res ;
    }
};