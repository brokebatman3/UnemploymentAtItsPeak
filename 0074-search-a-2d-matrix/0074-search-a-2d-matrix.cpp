class Solution {
public:
    bool searchMatrix(vector<vector<int>>& v, int target) {
        
        if(target < v[0][0] || target > v.back().back() || v.empty()){
            return 0; 
        }
        
        int i = 0 ; 
        int low = 0 , high = v[i].size()-1 ;
        while(low  <= high  && i < v.size()){
            if(target >= v[i][low] && target <= v[i][high]){
                int mid = (low + high)/2; 
                if(target == v[i][mid]){
                    return 1; 
                }
                else if(target > v[i][mid] ){
                    low = mid + 1;
                }
                else{
                    high = mid -1; 
                }
            }
            else{
                i+=1;
            }
        }
        return 0 ; 
    }
};