class Solution {
public:
    bool isPerfectSquare(int num) {
        if (num < 0) {
            return false;
        }
        if (num == 0) {
            return true;
        }

        std::vector<bool> dp(num + 1, false);
        for (int i = 0; i * i <= num; ++i) {
            dp[i * i] = true;
        }

        return dp[num];
    }
    int func(int n ){
        if(isPerfectSquare(n)){
            return 1; 
        }
        while ((n & 3) == 0) // n%4 == 0  
        {
            n >>= 2;  
        }
        if ((n & 7) == 7) // n%8 == 7
        {
            return 4;
        }
        int sqrtf = (int)sqrt(n); 
        for(int i = 1; i <= sqrtf; i++)
        {  
            if (isPerfectSquare(n - i*i)) 
            {
                return 2;  
            }
        }  
        return 3; 
    }
    int numSquares(int n) {
        // if(isPerfectSquareDP(n)){
        //     return 1;
        // }
        return func(n); 
        
    }
};
