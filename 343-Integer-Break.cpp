class Solution {
public:
    vector<int>dp ; 
    int func(int n ){
        if(n ==1){
            return 1;
        }
        if(n == 2){
            return 1; 
        }
        if(dp[n] != -1){
            return dp[n]; 
        }
        int res  = INT_MIN  ; 
        for(int i = 2 ; i<=n-1 ;i++){
            int prod = i*max(n-i , func(n-i)); 
            res = max(res , prod); 
        }
        return dp[n] = res ; 



    }
    int integerBreak(int n) {
        dp.resize(n+1 , -1 ); 
        return func(n ); 
    }
};