class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i = 0 ; int j = nums.size() - 1; 
        for(int i = 0 ; i < nums.size() ; i++){
            int x = nums[i]; 
            for(int j = i + 1 ; j < nums.size() ; j++){
                int y = nums[j]; 
                if(x + y == target ){
                    return {i , j }; 
                }
            }
        }
        return {-1}; 
    }
};