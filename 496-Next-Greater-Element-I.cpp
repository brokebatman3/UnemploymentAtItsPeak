class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& temperatures) {
        int n = temperatures.size();
        map<int,int>m;  // initially all 0, stores distance between their next greater element and current temperature
        stack<int>st{};
        
		// move from right to left
        for(int i = n-1; i>=0; --i){
            // pop until we find next greater element to the right
			// since we came from right stack will have element from right only
			// s.top() is the index of elements so we put that index inside temperatures vector to check
            while(!st.empty() && st.top() <= temperatures[i])
                st.pop();
				
            // if stack not empty, then we have some next greater element, 
			// so we take distance between next greater and current temperature
			// as we are storing indexes in the stack
            if(!st.empty())
                m[temperatures[i]] = st.top(); // distance between next greater and current
            
			// push the index of current temperature in the stack,
			// same as pushing current temperature in stack
            st.push(temperatures[i]);
        }
        vector<int>res ; 
        for(int i = 0 ; i < nums1.size() ; i++){
            int t = m[nums1[i]];
            if(t == 0 ){
                res.push_back(-1);
            }
            else{
                res.push_back(t); 
            }
        }
        return res;
    }
};