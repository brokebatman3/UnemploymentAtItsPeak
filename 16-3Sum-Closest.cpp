class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int mini = INT_MAX; 
        int res = -1; 
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                for (int k = j + 1; k < n; k++) {
                    int temp = nums[i] + nums[j] + nums[k]; 
                    if(abs(target - temp) < mini){
                        mini = abs(target - temp); 
                        res = temp ; 
                    }

                }
            }
        }
        return res ;
    }
};