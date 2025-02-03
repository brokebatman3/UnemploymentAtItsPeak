class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod = 1; 
        bool f = 0 ;
        int count_zeros = 0 ; 
        vector<int> res(nums.size() , 0 );  
        for(int i = 0 ; i< nums.size() ; i++){
            if(nums[i] == 0 ){
                f = 1; 
                count_zeros ++; 
            }
            else{
                prod *= nums[i]; 
            }
        }
        if(count_zeros > 1 ){
            return res ; 
        }
        for(int i = 0 ; i< nums.size()  ; i++){
            if(nums[i] == 0 ){
                res[i] = prod; 
            }
            else{
                if(!f){
                    res[i] = prod/nums[i] ; 
                }
                else{

                res[i] = 0 ; 
                }
            }
        } 
        return res; 


    }
};