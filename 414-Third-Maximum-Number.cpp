class Solution {
public:
    int thirdMax(vector<int>& nums) {
        vector<int> res ; 
        for(auto  x : nums){
            res.push_back(x); 
        }
        int second_max = INT_MAX , third_max =INT_MAX ;
        int first_max = *max_element(res.begin() , res.end()); 
        res.erase(remove(res.begin(), res.end(), first_max), res.end());
        if(!res.empty()){
            
         second_max = *max_element(res.begin() , res.end()); 
        res.erase(remove(res.begin(), res.end(), second_max), res.end());
        }
        if(!res.empty()){
            third_max = *max_element(res.begin() , res.end()); 
            res.erase(remove(res.begin(), res.end(), third_max), res.end());
        }
        return third_max == INT_MAX ? first_max : third_max ; 

    }
};