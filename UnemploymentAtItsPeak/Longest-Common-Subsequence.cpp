class Solution {
public:
    int dp[1001][1001];
    int func(string &x, string &y, int i, int j) {
        if (i < 0 || j < 0) {
            return 0;
        }
        if(dp[i][j] != -1){
            return dp[i][j]; 
        }
        if (x[i] == y[j]) {
            return dp[i][j] =  1 + func(x, y, i - 1, j - 1);
        }
        return dp[i][j] =  max(func(x, y, i - 1, j) , func(x , y , i , j - 1));
    }
    int longestCommonSubsequence(string x, string y) {
        memset(dp , -1 , sizeof(dp));
        return func(x , y , x.length() -1 , y.length()-1);
    }
};