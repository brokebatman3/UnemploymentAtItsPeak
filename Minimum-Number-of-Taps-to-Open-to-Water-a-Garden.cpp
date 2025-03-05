class Solution {
public:
    vector<int>func(vector<int>&v ){
        vector<pair<int,int>>tempv ;  
        vector<int>res(v.size() , 0 ) ;
       
        for(int i = 0 ; i < v.size() ;i++){
             int left = max(i-v[i] , 0 ); 
            int right = min(i+v[i] ,(int) v.size()-1); 
            tempv.push_back({left,right}); 
           
        }
        for(int i = 0 ; i < tempv.size() ; i++){
            res[tempv[i].first] = max(res[tempv[i].first] , tempv[i].second); 
        }
        return res  ; 
    }

    int minTaps(int n, vector<int>& v) {
        vector<int>helper  = func(v); 
        int max_end = 0 ;
        int curr_end = 0 ;
        int taps = 0 ;
        for(int i = 0 ; i < helper.size() ; i++){
            if(i>max_end){
                return -1; 
            }
            if(i > curr_end ){
                taps++; 
                curr_end = max_end; 
            }
            max_end = max(max_end, helper[i]); 
        }
        return taps;
    }
};