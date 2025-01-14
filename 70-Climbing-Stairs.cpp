class Solution {
public:
    int func(int n , vector<int>&v ){
        if(n== 0){
            return 1; 
        }
        if(n<=3){
            return n ; 
        }
        if(v[n] != 0){
            return v[n]; 
        }
        return v[n] = func(n-1 , v ) + func(n-2 ,v ) ; 
    }
    int climbStairs(int n) {
        vector<int>v(n + 1 , 0 );  
        return func(n , v );
    }
};