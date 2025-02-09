class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int element = nums[0];
        int count = 1;
        vector<int> res;
        for (int i = 1; i < nums.size(); i++) {
            if (element == nums[i]) {
                count++;
            } else {
                if (count > (nums.size() / 3)) {
                    res.push_back(element);
                }
                element = nums[i];
                count = 1;
            }
        }
        cout << count << " " << element << " " << (nums.size() / 3);
        if (count > (nums.size() / 3)) {
            res.push_back(element);
        }
        return res;
    }
};