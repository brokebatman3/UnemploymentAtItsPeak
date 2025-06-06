class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int>m ; 
        for(int i = 0 ; i < nums.size() ; i++){
            m[nums[i]]++; 
        }
        for(auto it = m.begin() ; it!= m.end() ; it++){
            if(it->second >1){
                return 1;
            }
        }
        return 0; 
    }
};