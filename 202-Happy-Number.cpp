class Solution {
public:
    bool isHappy(int n) {
        map<int ,int> res_c ;
        for(int i = 0 ; i<= 9  ; i++){
            res_c[i] = (i*i); 
        }
        map<int,int> m; 
        m[0] = 0 ;
        m[1] = 1;
        m[2] = 0 ; 
        m[3] = 0 ; 
        m[4] = 0; 
        m[5] = 0 ; 
        m[6] = 0 ; 
        m[8] = 0 ; 
        m[9] = 0 ; 
        m[7] = 1 ; 

        while(n > 9 ){
            int x = n ;
            int sum = 0 ;   
            while(x > 0){
                int a = x %10 ; 
                x = x / 10;
                sum += res_c[a];  
            }
            n = sum ; 

        }
       return m[n];

    }
};