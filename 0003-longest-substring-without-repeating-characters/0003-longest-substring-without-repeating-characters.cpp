class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxl = 0;
        int left = 0;
        unordered_map<char, int> ls;

        for(int i=0; i<s.length(); i++){
            char c = s[i];
            if(ls.find(c) != ls.end() && ls[c] >= left){
                left = ls[c] + 1;
            }

            maxl = max(maxl, i-left+1);
            ls[c] = i;
        }
        return maxl;
    }
};