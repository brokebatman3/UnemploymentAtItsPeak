class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin() , nums.end()); 
        int  i = 0 , j =nums.size() -1; 
        int res = INT_MIN; 
        while(i <= j ){
            int x = nums[i] + nums[j]; 
            res = max (res , x ); 
            i++ , j--; 
        }
        return res ; 
    }
};