class Solution {
public:

    void func2(vector<int>& v, int target, int sum, vector<int>& x,
              set<vector<int>>& res, int index , int k ) {
        if (sum == target && x.size()==k ) {
            

            res.insert(x);
            
            return;
        }
        // if( index>=1 && v[index] == v[index-1 ] ){
        //     return ;
        // }
        if (index == v.size() || sum > target) {
            return;
        }
        x.push_back(v[index]);
        func2(v, target, sum + v[index], x, res, index + 1 , k );
        x.pop_back();
        func2(v, target, sum, x, res, index + 1 , k );
        return;
    }
    vector<int> func(){
        vector<int>v; 
        for(int i  = 1 ; i <= 9 ; i++){
            v.push_back(i); 
        }
        return v; 
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>v = func(); 
        set<vector<int>> res;
        vector<int> x;
        func2(v, n, 0, x, res, 0 , k );
        vector<vector<int>>ans (res.begin() , res.end()); 
        return ans ; 
    }
};