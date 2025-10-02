class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size(); 
        int range_l = 1 ; 
        int range_h = nums.size() ;
       for(int i = 0 ; i < n ; i++){
            while((nums[i] >= range_l && nums[i] <= range_h) && nums[i] != nums[nums[i]-1] ){
                swap(nums[i] , nums[nums[i] -1]); 
            }
       }
        
    //    for(auto x : nums){
    //     cout<<x <<" "; 
    //    }
       for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] != i + 1){
                return i + 1; 
            }
        
       }
       return n + 1;
    }
};