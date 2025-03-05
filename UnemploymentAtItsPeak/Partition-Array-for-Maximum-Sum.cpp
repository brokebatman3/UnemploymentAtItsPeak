class Solution {
public:
    vector<int>dp ; 
    int func(vector<int>&v , int k ,int start , int n ){

        if(start >= n ){
            return 0; 
        }
        if(dp[start] != -1){
            return dp[start]; 
        }
        int max_element = v[start];  
        int max_sum = v[start]; 
        for(int end = start ; end < start + k && end < n ; end ++ ){
            max_element = max(max_element , v[end]); 
            max_sum = max(max_sum ,  (end-start+1)*max_element + func(v , k , end+1 , n ));  
        }
        return dp[start] = max_sum ; 
    }
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        dp.resize(arr.size() + 1 , -1); 
        return func(arr , k , 0 , arr.size()); 
    }
};