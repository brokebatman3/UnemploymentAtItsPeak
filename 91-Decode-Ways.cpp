class Solution {
public:
    vector<int>dp; 
    int func(string& s, int i, int n) {
        if (s[i] == '0') {
            return 0;
        }
        if (i >= n - 1) {
            return 1;
        }
        if(dp[i] != -1){
            return dp[i]; 
        }
        if (i + 1 < s.size() &&
            (s[i] == '1' ||
             (s[i] == '2' && (s[i + 1] >= 48 && s[i + 1] <= 54)))) {
            return dp[i] =  func(s, i + 1, n) + func(s, i + 2, n);
        } else {
            return dp[i] =  func(s, i + 1, n);
        }
    }
    int numDecodings(string s) { 
        dp.resize(s.length() + 1 , -1); 
        
        
        return func(s, 0, s.length()); }
};