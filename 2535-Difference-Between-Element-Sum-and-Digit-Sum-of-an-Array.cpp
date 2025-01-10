class Solution {
public:
    int func(int x ){
        int sum = 0 ; 
        while(x ){
            sum += x%10; 
            x = x/10; 
        }
        return sum ; 
    }
    int differenceOfSum(vector<int>& nums) {
        int e_sum = 0 ; 
        int d_sum = 0 ; 
        for(int i = 0  ; i< nums.size() ; i++){
            e_sum += nums[i] ; 
            d_sum += func(nums[i]); 
        }
        return abs(e_sum - d_sum ); 
        
    }
};