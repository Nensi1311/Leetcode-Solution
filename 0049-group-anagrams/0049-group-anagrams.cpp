class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        vector<string> v = strs;
        map<string, vector<int>> mp;

        for(int i=0; i<strs.size(); i++){
            sort(v[i].begin(), v[i].end());
            mp[v[i]].push_back(i);
        }

        for(auto i : mp){
            vector<string> s;
            for(int j : i.second){
                s.push_back(strs[j]);
            }
            result.push_back(s);
        }
        return result;
    }
};