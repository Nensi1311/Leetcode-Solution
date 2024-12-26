class Solution {
public:
    int maxDepth(string s) {
        stack<char> st;
        int ans=0;
        int Max=INT_MIN;
        for(auto i:s){
            if(i == '('){
                st.push(i);
                ans++;
                Max=max(ans, Max);
            }
            else if(i == ')'){
                st.pop();
                ans--;
            }
            else{
                Max=max(ans, Max);
            }
        }
        return Max;
    }
};