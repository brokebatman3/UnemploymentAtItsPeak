class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>m ;
        vector<int>res; 
        for(int i = 0 ; i < nums.size() ; i++){
            m[nums[i]]++; 
        }
        for(int i = 0 ; i < k  ; i++){
            int maxi = INT_MIN ; 
            int ele = -1; 
            for(auto it = m.begin() ; it != m.end() ; it++){
                if(maxi < it->second){
                    maxi = it->second; 
                    ele = it->first; 
                }
            }
            res.push_back(ele); 
            m.erase(ele); 
        }
        return res ;
    }
};