class Solution {
public:
    bool canPlaceFlowers(vector<int>& arr, int n) {
        vector<int> flowerbed = arr;
          int size = flowerbed.size() ;
          if(n ==0 ){
            return 1; 
          }
          if(size == 0){
                return 0 ; 
          }
          if(size == 1){
            return flowerbed[0] == 0 && n == 1  ? 1 : 0 ; 
          }
    int count = 0;
    if (flowerbed[0] == 0 && flowerbed[1] == 0)
    {
        flowerbed[0] = 1;
        count += 1;
    }

    if (flowerbed[size-1] == 0 && flowerbed[size - 2] == 0)
    {
        flowerbed[size-1] = 1;
        // n-= 1  ;
        count += 1;
    } 
    for(int i = 0 ; i < size-3 ;i++ ){
        if(flowerbed[i] ==0 && flowerbed[i + 1] == 0 && flowerbed[i+2] == 0){
            count++; 
            flowerbed[i + 1] =1; 
        }
    }
    return count >= n ? 1 : 0 ; 

    }
};