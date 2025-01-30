class Solution {
public:
    int maxDistToClosest(vector<int>& nums) {
        int n = nums.size(); 
        map<int , pair<int ,int>> m ; 
        for(int i = 0 ; i < n ; i++){
            int j , k ; 
            for( j = i-1 ; j >= 0 ; j--){
                if(nums[j] != 0 ){
                    break ; 
                }
            }

            for(k = i+1 ; k <n ; k++){
                if(nums[k] != 0 ){
                    break ; 
                }
            }
            if(k >=  n){
                k = INT_MAX; 
            }
            if(j < 0 ){
                j = INT_MAX; 
            }
            if(nums[i] == 0 ){

            m.insert({i , {j , k }}); 
            }
        }
        
        int diff = INT_MIN ; 
        for(auto x : m ){
            // cout<< x.first <<" " <<  x.second.first <<" "<<x.second.second <<endl;
            int ld = abs(x.first - x.second.first);
            int rd = abs(x.first - x.second.second);
            cout<< ld <<" " << rd <<endl; 
            if(min(ld, rd ) > diff){
                diff = min(ld,rd); 
            }
        }
        return diff ; 

    }
};