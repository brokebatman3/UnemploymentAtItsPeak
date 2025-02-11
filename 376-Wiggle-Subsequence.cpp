class Solution {
public:
    int func(vector<int> &nums , bool f ){
          int len = 0 ; 
        for(int i = 1 ; i <nums.size() ;i++){
            int x = nums[i]-nums[i-1]; 
            if(x > 0 && f ){
                len += 1; 
                f= 0 ; 
            }
            else if(x < 0 && !f){
                len += 1; 
                f = 1 ;
            }

        }
        return len+1 ;
    }
    int wiggleMaxLength(vector<int>& nums) {
      return max(func(nums , 0 ) ,func(nums,1));
    }
};