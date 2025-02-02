class Solution {
public:
    string reverseVowels(string s) {
        vector<char> v;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' ||
                s[i] == 'U') {
                v.push_back(s[i]);
            }
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' ||
                s[i] == 'u') {
                v.push_back(s[i]);
            }
        }
        reverse(v.begin(), v.end());
        int j = 0;
        for (auto x : v) {
            cout << x << " ";
        }
        for (int i = 0; i < s.length(); i++) {
            if ((s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' ||
                 s[i] == 'U') ||
                (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' ||
                 s[i] == 'u')) {
                s[i] = v[j++];
            }
        }
        return s;
    }
};