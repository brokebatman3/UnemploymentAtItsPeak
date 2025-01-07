class Solution {
public:
    int firstocc(vector<int>& nums, int s, int e, int target) {
        int res = -1;
        while (s <= e) {
            int mid = (s + e) / 2;
            if (nums[mid] == target) {
                res = mid;
                e = mid - 1;
            } else if (nums[mid] < target) {
                s = mid + 1;
            } else {
                e = mid - 1;
            }
        }
        return res;
    }
    int lastocc(vector<int>& nums, int s, int e, int target) {
        int res = -1;
        while (s <= e) {
            int mid = (s + e) / 2;
            if (nums[mid] == target) {
                res = mid;
                s = mid + 1;
            } else if (nums[mid] < target) {
                s = mid + 1;
            } else {
                e = mid - 1;
            }
        }
        return res;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        if (nums.size() == 0) {
            return {-1, -1};
        }
        if (nums.size() == 1) {
            if (nums[0] == target) {
                return {0, 0};
            }
            return {-1, -1};
        }

        return {firstocc(nums, 0, nums.size() - 1, target),
                lastocc(nums, 0, nums.size() - 1, target)};
    }
};