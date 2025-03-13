class Solution {
public:
    // sum >= target 
    // sum - target >= 0 

    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size(); 
        int sum  = 0 ;
        int res= INT_MAX ;
        int left = 0; 
        for(int right = 0 ; right < nums.size() ; right++){
            sum += nums[right];
             if(sum >= target){
                res = min(res, right - left +  1);
            } 
            while(sum > target ){
                sum -= nums[left++]; 
            if(sum >= target){
               res = min(res, right - left +  1);
            }
            }




        }
        return res == INT_MAX ? 0 : res; 
        
    }
};