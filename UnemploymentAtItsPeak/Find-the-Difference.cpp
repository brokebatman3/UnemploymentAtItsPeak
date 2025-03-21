class Solution {
public:
    char findTheDifference(string s, string t) {
        map<char,int>m; 
        for(int i = 0 ; i < t.length() ; i++){
            m[t[i]]++; 
        }
        for(int i = 0 ; i < s.length() ; i++){
            m[s[i]]--; 
            if(m[s[i]] == 0 ){
                m.erase(s[i]); 
            }
        }
        for(auto x : m ){
            return x.first; 
        }
    return 0 ; 























































    
    }
};