class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_sum = INT_MIN ; 
        int max_ele = *max_element(nums.begin() , nums.end()); 
        for(int i = 0 ; i < nums.size() ;i++){
            int x = nums[i]; 
            for(int j = i+1 ; j < nums.size() ; j++){
                x += nums[j]; 
            max_sum = max(max_sum , x ); 
            }
        }
        return max_ele > max_sum ? max_ele : max_sum ; 
    }
};