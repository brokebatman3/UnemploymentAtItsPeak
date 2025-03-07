class Solution {
public:
    int func(vector<int>&v , int index ,int sum  ,int count  ){
        int res = 0 ; 
       map<int,int>m; 
       m[0]=-1;
       int curr_sum = 0 ; 
       for(int i = 0 ; i< v.size() ; i++){
            curr_sum += v[i]; 
            if(m.find(curr_sum ) != m.end()){
                res = max(res , i - m[curr_sum] ); 
            }
            else{
                m[curr_sum] = i ; 
            }
       }
       if(curr_sum == 0){
        return v.size(); 
       }
        return res ;
    }
    int findMaxLength(vector<int>& nums) {
        vector<int>v ; 
        for(int i = 0 ;i < nums.size();i++){
            if(nums[i] == 0){
                v.push_back(-1); 
            }
            else{
                v.push_back(1); 
            }
        }
        return func(v , 0 , 0 , 0 ); 
    }
};