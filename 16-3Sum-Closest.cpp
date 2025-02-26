class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int res = -1; 
        int mini = INT_MAX; 
        for (int i = 0; i < n; i++) {
            int start = i + 1;
            int end = n - 1;
            while (start < end) {
                int temp = nums[i] + nums[start] + nums[end];
                if (abs(temp - target) < mini) {
                    mini = abs(temp - target) ;res = temp;
                }

                if (temp == target) {
                    return temp;
                } else if (temp > target) {
                    end--;
                } else {
                    start++;
                }
            }
        }
        return  res ;
    }
};