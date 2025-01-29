class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        int n = nums.size(); 
        // if(n < k ){
        //     return ;
        // }
        reverse(nums.begin() , nums.end()); 
        reverse(nums.begin() + k%n  , nums.end() );
        reverse(nums.begin() , nums.begin() + k%n  ); 
        return ;
        
    }
};