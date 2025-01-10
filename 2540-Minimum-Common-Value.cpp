
class Solution {
public:
    int getCommon(vector<int>& num1, vector<int>& num2) {
        int i = 0 ; int j = 0 ;
        int mini = INT_MAX;  
        while(i < num1.size() && j < num2.size()){
            if(num1[i] == num2[j]){
                mini = min(mini , num1[i]); 
            }
             if(num1[i] >= num2[j]){
                j++; 
             }
             else{
                i++; 
             }
        }
        return mini == INT_MAX ? -1 : mini ; 
    }
};