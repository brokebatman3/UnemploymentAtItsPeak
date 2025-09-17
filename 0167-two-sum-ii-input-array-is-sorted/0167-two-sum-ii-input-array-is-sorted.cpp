class Solution {
public:
    vector<int> twoSum(vector<int>& v, int target) {
        int i = 0 ; 
        int j = v.size()-1;
        while(i < j ){
            int x = v[i]  + v[j];
            if(x == target){
                return{i+1 , j + 1 }; 
            }
            else if(target < x){
                j--;
            }
            else{
                i++; 
            }
        }
        return {-1,-1};
    }
};