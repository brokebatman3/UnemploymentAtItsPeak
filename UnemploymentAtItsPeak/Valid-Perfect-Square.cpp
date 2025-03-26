class Solution {
public:
    bool isPerfectSquare(int num) {
        for(long long int i = 1 ; ; i++){
            if(i*i == num){
                return 1;
            }
            if(i*i > num){
                return 0; 
            }
        }
        return 0; 
    }
};