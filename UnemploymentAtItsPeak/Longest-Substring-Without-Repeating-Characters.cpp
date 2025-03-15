class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s.length() < 2) {
            return s.length();
        }
        int res = INT_MIN;
        int left = 0;
        map<char, int> mp;
        for (int right = 0; right < s.length(); right++) {
            if (mp.find(s[right]) == mp.end()) {
                 mp[s[right]] = right;
                res = max(res,  right - left + 1 );
                
            } else {
                while(mp.count(s[right])){
                    mp.erase(s[left]); 
                    left++;
                }
                
            }
            mp[s[right]] = right;
        }
        
        return res == INT_MIN ? 0 : res;
    }
};