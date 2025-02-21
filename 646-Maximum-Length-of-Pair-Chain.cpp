class Solution {
public:
    static bool comp(vector<int>&v1 , vector<int>&v2){
        return v1[1] < v2[1];  
    } 
    int findLongestChain(vector<vector<int>>& v) {
        sort(v.begin() , v.end() , comp ); 
        int len = 1 ; 
        int comparison_number = v[0][1]; 
        for(int i =1 ; i < v.size() ; i++){
            if(v[i][0] > comparison_number ){
                comparison_number = v[i][1]; 
                len++; 
            }
        }
        return len ; 
    }
};