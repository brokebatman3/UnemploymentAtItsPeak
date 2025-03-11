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
    int numberOfSubarrays(vector<int>& nums, int k) {
        vector<int>v; 
        for(int i = 0 ; i< nums.size() ; i++){
            if(nums[i]%2 == 0 ){
                v.push_back(0); 
            }
            else{
                v.push_back(1); 
            }
        }
        return func(v,k) - func(v , k-1);
    }
};