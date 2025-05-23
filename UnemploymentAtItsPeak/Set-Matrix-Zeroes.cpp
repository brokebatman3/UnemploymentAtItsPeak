class Solution {
public:
    void setZeroes(vector<vector<int>>& v) {
        set<int>zero_col ; 
        set<int>zero_row ; 
        for(int i = 0 ; i<v.size() ; i++ ){
            for(int j = 0 ; j < v[i].size() ; j++){
                if(v[i][j ] == 0){
                   zero_row.insert(i);
                   zero_col.insert(j); 
                }
            }
        }
        for(int i = 0 ; i<v.size() ; i++){
            for(int j = 0 ;  j< v[i].size() ; j++){
                if(zero_row.find(i) != zero_row.end() || zero_col.find(j) != zero_col.end()){
                    v[i][j] = 0 ; 
                }
            }
        }
    }
};