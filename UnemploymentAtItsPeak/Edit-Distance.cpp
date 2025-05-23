class Solution {
public:
 
    int func(string x , string y , int n , int m , vector<vector<int>>&dp ){
        if(n < 0 ){
            return m+1;
        }
        if(m < 0 ){
            return n + 1; 
        }
        if(dp[n][m] != -1)
        {
            return dp[n][m]; 
        }
        if(x[n] == y[m]){
            return dp[n][m] = func(x , y , n-1 , m-1 , dp ); 
        }
        else{
            return dp[n][m] = 1 +min(func(x , y , n-1 , m ,dp  ) , min(func(x , y , n , m-1 ,dp ) , func(x , y , n-1 , m-1 ,dp ))); 
        }
    }
    int minDistance(string word1, string word2) {
        vector<vector<int>>dp(word1.length()+1 , vector<int>(word2.length() +1 , -1)); 
        return func(word1, word2 , word1.length()-1 , word2.length()-1 , dp ); 
    }
};