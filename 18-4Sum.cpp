class Solution {
public:
    const unsigned int mod = 1000000007;
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        set<vector<int>> temp_res;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            for (int k = i  +1; k < n  ; k++) {
                int x = k + 1;
                int y = n - 1;
                while (x < y) {

                    long long int sum  =(long long int ) nums[i] + (long long int )nums[k] + (long long int )nums[x] + (long long int )nums[y];
                    if (sum  == target) {
                        vector<int> t = {nums[i], nums[k], nums[x], nums[y]};
                        sort(t.begin(), t.end());
                        temp_res.insert(t);
                        x++, y--;
                    } else {
                        if (sum > target) {
                            y--;
                        } else {
                            x++;
                        }
                    }
                }
            }
        }
        vector<vector<int>> res;
        for (auto it = temp_res.begin(); it != temp_res.end(); it++) {
            res.push_back(*it);
        }
        return res;
    }
};