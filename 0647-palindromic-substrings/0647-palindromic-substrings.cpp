class Solution {
public:
    int countSubstrings(string s) {
        int ans=0;
        for(int i=0; i<s.size(); i++){
            int le=i-1, re=i+1, c=1;
            while(le>=0 && re<s.size() && s[le--] == s[re++]){
                c++;
            }
            ans+=c;
            c=0;
            le=i, re=i+1;
            // if(i+1<s.size() && s[i]==s[i+1]){
            //     c++;
            // }
            while(le>=0 && re<s.size() && s[le--] == s[re++]){
                c++;
            }
            ans+=c;
        }
        return ans;
    }
};