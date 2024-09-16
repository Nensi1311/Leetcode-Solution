class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        int m=strs[0].size();
        string result="";
        for(int i=0; i<m; i++){
            if(strs[0][i]==strs.back()[i]){
                result.push_back(strs[0][i]);
            }
            else{
                break;
            }
        }
        return result;
    }
};