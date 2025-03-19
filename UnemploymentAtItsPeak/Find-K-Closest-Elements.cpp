class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        map<int , vector<int>> m ;
        for(int i = 0 ; i < arr.size() ; i++){
            m[abs(arr[i] - x )].push_back(arr[i]); 
        }
        for(auto x : m ){
            cout
        }
        return {0}; 
    }
};