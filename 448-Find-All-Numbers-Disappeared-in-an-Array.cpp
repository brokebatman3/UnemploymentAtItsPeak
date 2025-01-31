class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {
            int j = abs(nums[i]);
            if (nums[j - 1] > 0) {
                nums[j - 1] = -nums[j - 1];
            }
        }
        vector<int> res;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 0) {
                res.push_back(i + 1);
            }
        }
      
        return res;
    }
};