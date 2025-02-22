class Solution {
public:
    bool isValid(string s) {
        if(s.length()%2 != 0){
            return 0; 
        }
        stack<char> st;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                st.push(s[i]);
            }
            else if (s[i] == ')' || s[i] == '}' || s[i] == ']') {
                if(st.empty() == 0 ){

                char temp = st.top();
                char temp2 = s[i];
                st.pop();
                if (temp == '[' && temp2 == ']') {
                    continue;
                } else if (temp == '{' && temp2 == '}') {
                    continue;
                } else if (temp == '(' && temp2 == ')') {
                    continue;
                } else {
                    // cout << temp << " " << temp2 << " ";
                    return 0;
                }
                }
                else{
                    return 0;
                }
            }
            else{
                return 0;
            }
        }
        return st.empty() == 1 ? 1 : 0 ;
    }
};