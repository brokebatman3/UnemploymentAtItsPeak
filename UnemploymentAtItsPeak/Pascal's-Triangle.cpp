class Solution {
public:
    vector<vector<int>> generate(int n) {
    vector<vector<int>> dp(n +1 ,  vector<int>(n +1 , 0 ) ); 
    for(int row = 1 ; row <= n ; row ++ ){
        for(int col = 1 ; col<= n ; col++){
            if(row == col || row == 0){
                dp[row][col] = 1; 
            }
            else{
                dp[row][col] = dp[row-1][col-1] + dp[row-1][col ]; 
            }
        }
    }
    vector<vector<int>>res ; 
    for(int i = 1 ; i < dp.size() ; i++){
        vector<int> t ;
        for(int j =1 ; j < dp[i].size() ; j++ ){
            if(dp[i][j]){
                t.push_back(dp[i][j]);
            }
        }
        res.push_back(t); 
    }
    return res;
    }
};