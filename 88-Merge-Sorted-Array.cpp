class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = 0, j = 0;
        vector<int> v;
        for (auto x : nums1) {
            v.push_back(x);
        }
        int k = 0;
        while (i < m && j < n) {
            if (v[i] <= nums2[j]) {
                nums1[k++] = v[i++];
            } else {
                nums1[k++] = nums2[j++];
            }
        }
        while(i<m ){
            nums1[k++] = v[i++];
        }
        while(j < n){
            nums1[k++] = nums2[j++];
        }
    }
};