class Solution {
public:
    bool func(vector<int> v, int mid) {
        vector<long long >nums(v.begin() , v.end()); 
        int n = nums.size();
        for (int i = 0; i < n - 1; i++) {

            if (nums[i] > mid) {
                return 0;
            }
            long long  buffer = mid - nums[i];
            nums[i + 1] = nums[i + 1] - buffer;
            nums[i] += buffer;
        }
        return nums[n - 1] <= mid;
    }
    int minimizeArrayValue(vector<int>& nums) {
        int n = nums.size();
        if (n <= 2) {
            return *max_element(nums.begin(), nums.end());
        }
        int l = 0;
        int h = *max_element(nums.begin(), nums.end());
        int res = INT_MAX;
        while (l <= h) {
            int mid = (l + h) / 2;
            if (func(nums , mid)) {
                res = mid;
                h = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        
        return res;
    }
};