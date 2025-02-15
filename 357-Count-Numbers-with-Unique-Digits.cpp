class Solution {
public:
    int mod = 1000000007;
    int func(int n ){
        if(n == 0 ){
            return 1 ; 
        }
        if(n==1){
            return 10 ; 
        }
        if(n == 2){
            return  91; 
        }
        vector<int> dp (n +1 , 0 ); 
        dp[0] = 0; 
        dp[1] = 10; 
        dp[2]  = 91; 
        int prod = 81;
        int t = 8 ; 
        for(int i = 3 ; i <= n ; i++){ 
           prod = prod *t ;
            dp[i] = dp[i-1] + prod;
            t--;   
        } 
        return dp[n]; 
    }
    int countNumbersWithUniqueDigits(int n) {
        return func(n );
    }
};