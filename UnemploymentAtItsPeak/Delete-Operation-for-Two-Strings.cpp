class Solution {
public:
    int dp[1001][1001];
    int func(string& s1, string& s2, int i, int j) {
        if (i == s1.size()) {
            return 0;
        }
        if (j == s2.size()) {
            return 0;
        }
        if (dp[i][j] != -1) {
            return dp[i][j];
        }
        if (s1[i] == s2[j]) {
            return dp[i][j] = 1 + func(s1, s2, i + 1, j + 1);
        } else {
            return dp[i][j] = max(
                       func(s1, s2, i + 1, j),
                       max(func(s1, s2, i, j + 1), func(s1, s2, i + 1, j + 1)));
        }
    }
    int longestCommonSubsequence(string s1, string s2) {
        memset(dp, -1, sizeof(dp));
        if (s1.size() > s2.size()) {

            return func(s1, s2, 0, 0);
        } else {
            return func(s2, s1, 0, 0);
        }
    }
    int minDistance(string word1, string word2) {
        if(word1 == word2){
            return 0; 
        }
       int len  = longestCommonSubsequence(word1, word2);
       int n1 = word1.length() , n2 = word2.length(); 
       return n1 + n2 - 2*len; 
    }
};