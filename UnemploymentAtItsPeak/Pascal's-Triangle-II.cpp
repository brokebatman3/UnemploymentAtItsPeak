class Solution {
public:
int mod =  1e9 + 7 ; 
    vector<int> getRow(int n) {
        vector<int> res(n + 1, 0);
        for (int row = 1; row <= n+1; row++) {
            double x = 1;
            for (int i = 1; i <= row; i++) {
                res[i-1] = x ;
                x = x * (row - i) / i;
            }
        }

        return res;
    }
};