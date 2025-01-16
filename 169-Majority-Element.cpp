class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int majority = 0 ;
        int res = 0 ;
        int n = nums.size();  
        for(int i = 0 ; i < n ; i++){
            if(majority  == 0 ){
                res = nums[i]; 
            }
            if(nums[i] == res){
                majority += 1;
            }
            else{
                majority -=1;
            }
        } 
        return res ; 

    }
};