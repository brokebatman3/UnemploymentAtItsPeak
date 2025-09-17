class Solution {
public:
    int helper(vector<int>&v , int low , int high ){
        int res =  0; 
        int n = v.size(); 
        while(low <=  high ){
            int mid = low + (high-low)/2;
            if((n-mid) > v[mid]){
                low = mid + 1;
            }
            else{
                res = max(res , (n-mid)); 
                high = mid-1 ; 
            }

        }
        if(v[v.size()-1] ==  0){
            return 0 ; 
        }
       return res ;
    }
    int hIndex(vector<int>& v) {
        if(v.size() ==  0){
            return 0 ; 
        }
        if(v.size() == 1){
            if(v[0] == 0 ){
                return 0 ; 
            } 
            else{
                return 1;
            }
        }
        int res = helper(v , 0 , v.size()-1 ) ; 
        return  res ; 
    }
};