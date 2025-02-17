class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size(); 
        int expected_sum = ((n+1)*n)/2; 
        int curr_sum = accumulate(nums.begin() , nums.end() , 0 ) ; 
        return expected_sum - curr_sum ; 
    }
};