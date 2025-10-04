class Solution {
public:
    string addStrings(string num1, string num2) {
        int i = num1.length()-1; 
        int j = num2.length()-1 ; 
        int c = 0 ; 
        string op = ""; 
        while(i >= 0 && j >= 0 ){
            int a = num1[i--] - '0'; 
            int b = num2[j--] - '0'; 
            int t = a + b +   c ; 
            c = t /10; 
            op += (t%10) + '0'; 
        }
        while(i >= 0 ){
            int a = num1[i--] - '0'; 
            int t = a +  c ; 
            c = t /10; 
             op += (t%10) + '0'; 
        }
         while(j >= 0 ){
            int a = num2[j--] - '0'; 
            int t = a +   c ; 
            c = t /10; 
             op += (t%10) + '0'; 
        }
        if(c){
            op += (c) + '0'; 
             
        }
        reverse(op.begin() , op.end()); 
        return op ;
    }
};