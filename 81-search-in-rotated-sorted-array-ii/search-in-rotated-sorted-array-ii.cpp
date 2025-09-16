class Solution {
public:
    bool seahrch(vector<int>& nums, int target) {
        if (nums.size() == 0) {
            return 0;
        }
        if(nums.size() == 1){
            return nums[0] == target;
        }
        int l = 0;
        int h = nums.size() - 1;
        while (l <= h) {
            
            int mid = l + (h - l) / 2;
            cout << mid << " ";
            if (target == nums[mid]) {
                return 1;
            }
            if (nums[l] == nums[mid] && nums[mid] == nums[h]) {
                l++;
                h--;
                continue;
            }
            if (nums[l] <= nums[mid]) {
                if (target >= nums[l] && target < nums[mid] ) {
                    h = mid - 1;
                } else {
                    l = mid + 1;
                }
            } else {
                if (target > nums[mid] && target <= nums[h]) {
                    l = mid + 1;
                } else {
                    h = mid - 1;
                }
            }
        }
        return 0;
    }
    bool search(vector<int>& arr, int key) {
        int n = arr.size();
        if (n == 0) return false;

        int l = 0, h = n - 1;
        while (l <= h) {
            int mid = l + (h - l) / 2;
            cout << mid << " ";
            if (arr[mid] == key) return true;

            // Ambiguous case due to duplicates: shrink both sides
            if (arr[l] == arr[mid] && arr[mid] == arr[h]) {
                l++;
                h--;
                continue;
            }

            // If left half is sorted
            if (arr[l] <= arr[mid]) {
                if (key >= arr[l] && key < arr[mid]) {
                    h = mid - 1;
                } else {
                    l = mid + 1;
                }
            }
            // Otherwise right half is sorted
            else {
                if (key > arr[mid] && key <= arr[h]) {
                    l = mid + 1;
                } else {
                    h = mid - 1;
                }
            }
        }
        return false;
    }
};