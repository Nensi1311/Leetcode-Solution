class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> map(256, -1);
        int n=s.size();
        int left=0, right=0, len=0, maxlen=0;
        
        while(right<n){
            if(map[s[right]]!=-1){
                if(map[s[right]] >= left){
                    left = map[s[right]]+1;
                }
            }
            len = right-left+1;
            maxlen = max(len, maxlen);

            map[s[right]] = right;
            right++;
        }
        return maxlen;
    }
};