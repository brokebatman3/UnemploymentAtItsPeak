class Solution {
public:
    int func(vector<int> & v    , bool f ){
        if(v.size() == 1){
            return v[0]; 
        }
        vector<int> dp(v.size() , 0 ) ;
        dp[0] = v[0] ; 
        dp[1] = max(v[0] , v[1]);  
        for(int i = 2 ; i < v.size() ; i++){
            dp[i] = max(dp[i-1] , v[i] + dp[i-2]); 
        }
        return dp[v.size()-1]; 

    }
    int rob(vector<int>& v) {
        return func(v  , 0 ); 
    }
};