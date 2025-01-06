class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0 ; 
        int high = nums.size() -1; 
        while(low < high){
            int mid = (low + high)/2; 
            if(nums[mid] > nums[high]){
                low = mid + 1;
            }
            else{
                high = mid ; 
            }
        }
        int rotP = low ; 
        int n  = nums.size(); 
        low = 0 , high = nums.size()-1; 
        while(low <= high){
            int mid = (low + high)/2;
            int rmid = (mid + rotP)%n;
            if(nums[rmid] == target ){
                return rmid ; 
            }
            if(nums[rmid] < target ){
                low = mid +1; 
            }
            else{
                high = mid - 1; 
            }
            
        }
        return -1; 
    }
};