class Solution {
public:
    int numRescueBoats(vector<int>& nums, int limit) {
       sort(nums.begin() , nums.end()); 
       int i = 0 , j = nums.size() -1; 
       int res =0 ; 
       while(i <= j ){
        int x = nums[i] + nums[j]; 
        if(x <= limit){
            i++ , j--; 
            res += 1; 
        }
        else{
            j--; 
            res += 1; 
        }
       }
       return res ;




    }
};