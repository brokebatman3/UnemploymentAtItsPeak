class Solution {
public:
    vector<int> decrypt(vector<int>& nums, int k) {
        vector<int> res(nums.size(), 0);

        if (k == 0) {
            return res;
        } else if (k > 0) {
            int sum = 0;
            int n = nums.size();
            for (int i = 1; i <= k; i++) {
                sum += nums[i % n];
            }
            for (int i = 1; i < 2 * n; i++) {
                res[(i - 1) % n] = sum;
                sum -= nums[i % n];
                sum += nums[(i + k) % n];
            }
            return res;

        } else {
            k = abs(k); 
            reverse(nums.begin() , nums.end()); 
           int sum = 0;
            int n = nums.size();
            for (int i = 1; i <= k; i++) {
                sum += nums[i % n];
            }
            for (int i = 1; i < 2 * n; i++) {
                res[(i - 1) % n] = sum;
                sum -= nums[i % n];
                sum += nums[(i + k) % n];
            }
            reverse(res.begin() , res.end()); 
            reverse(nums.begin() , nums.end()); 
             return res;
        }
    }
};