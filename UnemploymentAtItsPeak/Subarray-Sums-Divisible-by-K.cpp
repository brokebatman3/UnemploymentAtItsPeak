class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
         map<int,int>m ; 
        m[0] = 1;
        int cnt = 0 ; 
        int pre_sum = 0 ; 
        for(int i = 0 ; i < nums.size() ; i++){
            pre_sum = ( pre_sum + nums[i] % k + k)%k; ; 
            cnt += m[pre_sum]; 
            m[pre_sum] += 1;
        }
    
    
        return cnt; 
    }
};