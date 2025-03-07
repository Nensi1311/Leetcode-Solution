class Solution {
public:
    bool areOccurrencesEqual(string s) {
        int n = s.length();
        map<char, int> mp;
        for(int i=0; i<n; i++){
            mp[s[i]]++;
        }

        int f = mp.begin()->second;
        for(auto &i : mp){
            if(i.second != f){
                return false;
            }
        }
        return true;
    }
};