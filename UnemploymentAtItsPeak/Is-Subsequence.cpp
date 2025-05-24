class Solution {
public:
// Recursive solution
bool func(string s , string t ,int m , int n ){
    if(m == 0 ){
        return 1; 
    }
    if(n == 0 ){
        return 0 ; 
    }
    if(s[m-1]  == t[n-1]){
        return func(s, t , m -1 , n-1 );
    }
    return func(s,t , m , n-1); 
} 
    bool isSubsequence(string s, string t) {
        
          if(s.length() > t.length()){
             return 0 ; 
         }  
         if( s.length() == 0){
            return 1;
         }
         if(s.length() == t.length()  ) {
            return s == t; 
         }
        return func(s , t , s.length()  , t.length() ); 
    }
// iterative solution 
    // bool isSubsequence(string s, string t) {
    //     if(s.length() > t.length()){
    //         return 0 ; 
    //     }
    //     int i = 0 ; int j = 0 ; 
    //     while(i < s.length() && j < t.length()){
    //         if(s[i] == t[j]){
    //             i++ ;
    //         }
    //         j++; 
    //     }
    //     if(i == s.length()){
    //         return 1 ; 
    //     }
    //     return 0 ; 
    // }
};