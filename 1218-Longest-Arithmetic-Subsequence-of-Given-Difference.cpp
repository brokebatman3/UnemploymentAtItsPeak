class Solution {
public:
    int longestSubsequence(vector<int>& v, int diff) {
        unordered_map<int,int> m ; 
        int res = INT_MIN ; 
        for(int i = 0 ; i<v.size() ; i++){
            int temp = v[i] - diff; 
            int tempAns = 0; 
            if(m.count(temp)){
                tempAns = m[temp] ; 
            }
            m[v[i]] = tempAns + 1;
            res = max(res , m[v[i]]); 
        }
        return res ;
    }
};