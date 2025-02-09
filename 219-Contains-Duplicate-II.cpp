class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int,int>m ;
        for(int i = 0 ; i< nums.size() ; i++){
            if(m.find(nums[i]) != m.end()){
                int x = abs(m[nums[i]] - i); 
                if(x <= k ){
                    return 1;
                }
            }
            m[nums[i]] = i ; 
        }
        return 0 ; 
    }
};