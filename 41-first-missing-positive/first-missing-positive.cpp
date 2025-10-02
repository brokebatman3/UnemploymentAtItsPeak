class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int maxi = *max_element(nums.begin() , nums.end()); 
        if(maxi <= 0 ){
            return 1; 
        }
        sort(nums.begin() , nums.end());
        for(int i = 1; i < maxi ; i++ ){
            if(!binary_search(nums.begin() , nums.end() , i )){
                return i ; 
            }
        }
        return maxi + 1; 
    }
};