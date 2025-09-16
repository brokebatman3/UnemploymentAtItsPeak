class Solution {
public:
    bool search(vector<int>& arr, int key) {
        int n = arr.size();
        if (n == 0) return false;

        int l = 0, h = n - 1;
        while (l <= h) {
            int mid = l + (h - l) / 2;
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