class Solution {
public:
    int maxJump(vector<int>& stones) {
        int n = stones.size();  
        if(n==2){
            return stones[n-1]; 
        }
        int res = 0 ; 
        for(int i = 0 ; i < n-2 ; i++){
            res = max(res , stones[i+2] - stones[i] ); 
        }
        return res ; 
    }
};