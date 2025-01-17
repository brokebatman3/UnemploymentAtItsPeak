class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int n = nums.size(); 
        vector<int> v (n , 0 ); 
        int maxi = INT_MIN ;
       int j = 0 ;  
        for(int i = n-1 ; i >= 0 ; i--){
            maxi = max(maxi , nums[i]); 
            v[j++] = maxi ; 
        }
        reverse(v.begin() , v.end()); 
        int i = 0 ; 
        j = 0 ;
        int max_profit = 0 ;  
        while(i < n && j < n ){
            int profit = v[i] - nums[i]; 
            max_profit = max(profit , max_profit); 
            i++ , j++; 
        }

        return max_profit; 
    }
};