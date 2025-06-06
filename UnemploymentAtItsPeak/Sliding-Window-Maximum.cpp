class Solution {
public:
   vector<int> maxSlidingWindow(vector<int>& nums, int k) {
    vector<int> result;
    if (k == 0) return result;
    multiset<int> w;
    for (int i = 0, n = (int)nums.size(); i < n; i++) {
        if (i >= k)
            w.erase(w.find(nums[i-k]));
        w.insert(nums[i]);
        if (i >= k-1)
            result.push_back(*w.rbegin());
    }
    return result;
}
};