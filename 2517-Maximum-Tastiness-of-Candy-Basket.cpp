class Solution {
public:
    bool check(int x, vector<int>& nums, int k) {

        int j = 0;
        int len = 1;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] - nums[j] >= x) {
                len++;
                j = i;
            }
        }
            if (len >= k) {
                return 1;
            }

        return 0;
    }
    int maximumTastiness(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int low = 0;
        int high = nums[n - 1] - nums[0];
        int ans = -1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            bool res = check(mid, nums, k);

            if (res) {
                ans = mid;
                low = mid + 1;

            } else {
                high = mid - 1;
            }
        }
        return ans;
    }
};