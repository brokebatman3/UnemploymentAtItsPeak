class Solution {
public:
    int func(vector<int>&v , int x ){
        if(x < 0 ){
            return 0; 
        }
        int res = 0 ; 
        int sum = 0 ; 
        int l = 0 ; 
        for(int r = 0 ; r < v.size() ; r++){
        sum  += v[r]; 
        while(sum > x) {
            sum -= v[l] ; 
            l ++; 
        }  
        res += (r-l+1); 
        }
        return res ; 
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return func(nums , goal ) - func(nums,goal-1); 
    }
};