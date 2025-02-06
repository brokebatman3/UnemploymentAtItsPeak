class Solution {
public:
    int helper(vector<int>& v, vector<int>& cost, int i ,vector<int>&dp ) {
        if (i >= v.size()) {
            return 0;
        }
        if(dp[i] != -1){
            return dp[i]; 
        }

         int option1 =  cost[0] + helper(v, cost, i + 1 , dp );
        int idx;
        for (idx = i; idx < v.size() && v[idx] < (v[i] + 7); idx++);
            
          int option2 =  cost[1] + helper(v, cost, idx , dp );
        for (idx = i; idx < v.size() && v[idx] < (v[i] + 30); idx++);
            
         int option3 = cost[2] + helper(v, cost, idx ,dp );
        return  dp[i] = min(option1,min(option2,option3)); 
    }
    int mincostTickets(vector<int>& days, vector<int>& costs) {

            vector<int> dp (days.size() + 1 , -1); 
        return helper(days , costs , 0 , dp  ); 
    }
};