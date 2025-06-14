class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> r;
        for(auto i : ransomNote){
            r[i]++;
        }

        unordered_map<char, int> m;
        for(auto i : magazine){
            m[i]++;
        }

        for(auto j : r){
            if(m[j.first] < j.second){
                return false;
            }
        }
        return true;
    }
};