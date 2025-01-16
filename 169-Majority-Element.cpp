class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> m ; 
        for(int i = 0 ; i < nums.size() ; i++){
            m[nums[i]]++; 
        }
        int res = -1 ; 
        int maxi = 0 ; 
        for(auto x : m ){
            if(x.second >= nums.size()/2){
                if(maxi < x.second){
                    maxi = x.second; 
                    res = x.first; 
                } 
            }
        }
        return res ; 

    }
};