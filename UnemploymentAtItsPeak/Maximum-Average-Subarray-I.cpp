class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size(); 
        double sum = accumulate(nums.begin() , nums.begin()+k , 0 );
        double avg  = sum/k; 
        for(int i = 1 ; i < n-k+1 ; i++){
            sum -=nums[i-1]; 
            sum += nums[i+k-1]; 
            cout<<sum <<" "; 
            avg = max(avg , sum/k); 
        }
        return avg ; 
    }
};