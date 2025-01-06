class Solution {
public:
    int strStr(string s, string t) {
        int i = 0;
        int n = s.length();
        int size = t.length();
        int j = 0;
        int first_occ = INT_MAX;
        while (i < n) {
            int k = i;
            while (s[i] == t[j] && i < n && j < size) {

                i++, j++;
            }
            if (j < size) {
                i = k + 1;
                j = 0;
            } else {
                first_occ = min(first_occ , k ) ;
                i = k + 1;
                j = 0;
            }
        }
        return first_occ == INT_MAX ? -1 : first_occ;
    }
};