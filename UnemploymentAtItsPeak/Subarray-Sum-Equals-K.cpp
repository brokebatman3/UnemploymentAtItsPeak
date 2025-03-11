class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int,int>m ; 
        m[0] = 1;
        int cnt = 0 ; 
        int pre_sum = 0 ; 
        for(int i = 0 ; i < nums.size() ; i++){
            pre_sum += nums[i]; 
            int remove = pre_sum - k ; 
            cnt += m[remove]; 
            m[pre_sum] += 1;
        }
    
    
        return cnt; 
    }

};