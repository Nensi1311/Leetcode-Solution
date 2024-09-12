class Solution {
public:
    string removeStars(string s) {
        stack<char> st;
        vector<char> v;
        for(int i=0; i<s.size(); i++){
            st.push(s[i]);
            if(s[i]=='*'){
                st.pop();
                st.pop();
            }
        }
        string result="";
        while(!st.empty()){
            result+=st.top();
            st.pop();
        }
        reverse(result.begin(), result.end());
        return result;
    }
};