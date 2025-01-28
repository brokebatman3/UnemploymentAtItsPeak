class Solution {
public:
    bool canJump(vector<int>& nums) {
        int max_range = nums[0];
        int n = nums.size(); 
        for(int i = 0 ; i< n ; i++){
            if(max_range >= n-1){
                return 1;
            }
            if(nums[i] == 0 && max_range == i  ){
                return 0; 
            }
            max_range = max(max_range , nums[i] + i ); 

        }
        return 1; 
    }
};