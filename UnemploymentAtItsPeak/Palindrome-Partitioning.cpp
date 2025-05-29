class Solution {
public:
    bool ispalindrome(string &s , int start  ,  int end ){
        if(start > end ){
            return 0; 
        }
        while(start < end ){
            if(s[start] == s[end]){
                start++ ; 
                end--; 
            }
            else{
                return 0; 
            }
        }
        return 1; 
    }
    void func(string &s  ,int i , vector<string>&v , vector<vector<string>>&res ){
       if(i == s.length()){
        res.push_back(v); 
       }
       else{
        for(int k = i ; k < s.length() ; k++  ){
            if(ispalindrome(s , i , k )){
                v.push_back(s.substr(i , k - i + 1 ));
                func(s , k + 1 , v , res ); 
                v.pop_back(); 

            }

        }
       }
    }
   
    vector<vector<string>> partition(string s) {
        vector<vector<string>>res ; 
        vector<string>v ;
         func(s , 0 , v , res);
        return res ;
    }
};

