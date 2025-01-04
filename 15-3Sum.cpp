class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end()); // Sorted Array
        if (nums.size() < 3) {          // Base case 1
            return {};
        }
        if (nums[0] > 0) { // Base case 2
            return {};
        }
        vector<vector<int>> res;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 0) { // If number fixed is +ve, stop there because we
                               // can't make it zero by searching after it.
                break;
            }
            if (i > 0 &&
                nums[i] == nums[i - 1]) { // If number is getting repeated,
                                          // ignore the lower loop and continue.
                continue;
            }
            int low = i+1;
            int high = nums.size() - 1;
            while(low < high){
                int sum = nums[i] + nums[low] + nums[high]; 
                if(sum < 0 ){
                    low++; 
                }
                else if(sum > 0 ){
                    high--; 
                }
                else{
                    res.push_back({nums[i] , nums[low]  , nums[high]}); 
                    int last_low = nums[low]; int last_high = nums[high]; 
                    while(low < high && last_low == low ){
                        low++; 
                    }
                    while(low < high && last_high == nums[high]){
                        high--; 
                    }
                }
            } 



        }
        return res; 
    }
};