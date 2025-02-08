class Solution {
public:
    int pow(int x , int y ){
        vector<int>v(y + 1 , 1); 
        int mod = 1000000007;
        for(int i =1 ; i < v.size() ; i++){
            v[i] = (v[i-1] * 2)%mod; 
        }
        return v[v.size() -1]; 
    }
    int numSubseq(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int mod = 1000000007;
        int res = 0;
        int i = 0  , j = nums.size()-1; 
         vector<int>v(nums.size() + 1  , 1); 
        for(int i =1 ; i < v.size() ; i++){
            v[i] = (v[i-1] * 2)%mod; 
        }
        while(i<=j)
        {
            if(nums[j]+nums[i]<=target)
            {
                res= (res+v[j-i])%mod;
                i++;
            }
            else
                j--;
        }
        return res;
    }
};