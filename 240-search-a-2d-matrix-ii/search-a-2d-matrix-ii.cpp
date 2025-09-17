class Solution {
public:

    bool searchMatrix(vector<vector<int>>& v, int target) {
      for(int row = 0 ; row < v.size() ; row++){
        if(binary_search(v[row].begin() , v[row].end() , target )){
            return 1; 
        }
      }
      return 0 ; 
    }
};