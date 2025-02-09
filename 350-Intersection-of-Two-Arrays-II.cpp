class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>m ;
        map<int,int>m2; 
        vector<int> res ;
        for(int i = 0 ; i < nums1.size() ; i++){
            m[nums1[i]]++; 
        }
        for(int i = 0 ; i<nums2.size() ; i++){
            m2[nums2[i]]++; 
        }

        for(auto it = m.begin() ; it != m.end() ; it++ ){
            if(m2.find(it->first) != m2.end()){
                for(int i = 0 ; i <min(it->second , m2[it->first]) ; i++){
                    res.push_back(it->first); 
                }
            }
        }
        return res ;


    }
};