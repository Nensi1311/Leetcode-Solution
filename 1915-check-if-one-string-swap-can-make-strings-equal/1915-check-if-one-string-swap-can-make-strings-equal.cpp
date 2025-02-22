class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        vector<int> v;
        for(int i=0; i<s1.length(); i++){
            if(s1[i] != s2[i]){
                v.push_back(i);
                if(v.size()>2){
                    return false;
                }
            }
        }
            if(v.empty()){
                return true;
            }

            if(v.size()==2){
                int i=v[0], j=v[1];
                return (s1[i]==s2[j]) && (s1[j]==s2[i]); 
            }
        return false;
    }
};