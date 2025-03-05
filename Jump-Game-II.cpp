class Solution {
public:
    int jump(vector<int>& nums) {
        int max_end = 0 ; 
        int curr_end = 0 ; 
        int jump = 0 ; 
        for(int i = 0 ; i < nums.size() ; i++){
            // if(i > max_end){
            //     return -1; 
            // }
            if(i > curr_end){
                jump++; 
                curr_end = max_end; 
            }
            max_end = max(max_end , nums[i]+i);
        }
        return jump ;
    }
};