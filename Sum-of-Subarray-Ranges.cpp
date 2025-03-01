class Solution {
public:
    vector<int> nextsmallerelement(vector<int>&v ){
        stack<int>s; 
        vector<int>res ;
        int n = v.size(); 
        for(int i = n-1 ; i >= 0 ; i-- ){
            while(!s.empty() && v[s.top()] >= v[i] ){
                s.pop(); 
            }
            if(!s.empty()){
                res.push_back(s.top()); 
            }
            else{
                res.push_back(v.size()); 
            }
            s.push(i);
        }
        reverse(res.begin() , res.end()); 
        return res ; 
    }
    vector<int> nextsmallerelementleft(vector<int>&v ){
        stack<int>s; 
        vector<int>res ;
        int n = v.size(); 
        for(int i = 0 ; i < n  ; i++ ){
            while(!s.empty() && v[s.top()] > v[i] ){
                s.pop(); 
            }
            if(!s.empty()){
                res.push_back(s.top()); 
            }
            else{
                res.push_back(-1); 
            }
            s.push(i);
        }
        return res ;
    }
    long long int sumSubarrayMins(vector<int>& arr) {
            vector<int>v1 = nextsmallerelement(arr); 
            vector<int>v2 = nextsmallerelementleft(arr); 
        long long int res = 0 ; 
        for(int i = 0 ; i< arr.size() ; i++){
            res = res  + (arr[i] * (long)((v1[i]-i)*(i-v2[i]))); 
        }
        return res;  
    }
    //-----------------------------------------------------------------------------------------------
    vector<int> nextlargerelement(vector<int>&v ){
        stack<int>s; 
        vector<int>res ;
        int n = v.size(); 
        for(int i = n-1 ; i >= 0 ; i-- ){
            while(!s.empty() && v[s.top()] <= v[i] ){
                s.pop(); 
            }
            if(!s.empty()){
                res.push_back(s.top()); 
            }
            else{
                res.push_back(v.size()); 
            }
            s.push(i);
        }
        reverse(res.begin() , res.end()); 
        return res ; 
    }
    vector<int> nextlargerelementleft(vector<int>&v ){
        stack<int>s; 
        vector<int>res ;
        int n = v.size(); 
        for(int i = 0 ; i < n  ; i++ ){
            while(!s.empty() && v[s.top()] < v[i] ){
                s.pop(); 
            }
            if(!s.empty()){
                res.push_back(s.top()); 
            }
            else{
                res.push_back(-1); 
            }
            s.push(i);
        }
        return res ;
    }
    long long int sumSubarrayMax(vector<int>& arr) {
            vector<int>v1 = nextlargerelement(arr); 
            vector<int>v2 = nextlargerelementleft(arr); 
        long long int res = 0 ; 
        for(int i = 0 ; i< arr.size() ; i++){
            res = res  + (arr[i] * (long)((v1[i]-i)*(i-v2[i]))); 
        }
        return res;  
    }
    long long subArrayRanges(vector<int>& nums) {
        long long int  subarray_min = sumSubarrayMins(nums); 
        long long int  subarray_max = sumSubarrayMax(nums); 
        return subarray_max - subarray_min; 
    }
};