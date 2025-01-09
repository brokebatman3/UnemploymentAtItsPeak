class Solution {
public:
    int maxArea(vector<int>& nums) {
        int n = nums.size(); 
        int i = 0 , j  = n -1 ;
        int maxi = INT_MIN ; 
        while(i < j && i < n && j >0  ){
            int cap = (j-i) * min(nums[i] , nums[j]); 
            maxi = max(maxi , cap ); 
            if(nums[i] < nums[j]){
                i++; 
            }
            else{
                j--; 
            }
        } 
        return maxi ; 
    }
};