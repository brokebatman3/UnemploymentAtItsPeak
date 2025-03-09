class Solution {
public:
    long long maximumSubarraySum(vector<int>& v, int k) {
        vector<int> nums = v;
        map<int, int> m;
        long long int res = 0;
        long long int maxi = 0;
        int n = nums.size();
        int count = 0;
        for (int i = 0; i < min(k, n); i++) {
            maxi += nums[i];
            m[nums[i]]++;
        }
        if (m.size() == k) {
            res = maxi;
        }
        for (int i = k; i < nums.size(); i++) {
            maxi += nums[i];
            maxi -= nums[i - k];
            m[nums[i - k]]--;
            m[nums[i]]++;
            if (m[nums[i - k]] <= 0) {
                m.erase(nums[i - k]);
            }

            if (m.size() == k) {
                res = max(res, maxi);
            }
        }
        return res;
    }
};