class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> m;
        for (int i = 0; i < nums.size(); i++) {
            m.insert(nums[i]);
        }

        int i = 0;
        for (auto it = m.begin(); it != m.end(); it++) {
            nums[i++] = *it;
        }
        return m.size();
    }
};