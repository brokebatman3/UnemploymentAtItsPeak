class Solution {
public:
    bool isPalindrome(string s) {
        string comp=""; 
       for(int i = 0 ; i< s.length() ; i++){
        if(isalnum(s[i])){
            comp += tolower(s[i]); 
        }
       }
       string comp2  = comp; 
       reverse(comp2.begin() , comp2.end()); 
        // cout<<comp<<" " <<comp2;
       return comp == comp2; 
    }
};
// 97-122
// 65 - 90