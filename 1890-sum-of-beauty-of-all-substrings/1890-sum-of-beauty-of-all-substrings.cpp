class Solution {
public:
    int beautySum(string s) {
        int sum=0;
        for(int i=0; i<s.length(); i++){
            unordered_map<char, int> map;
            for(int j=i; j<s.length(); j++){
                map[s[j]]++;
                int Max=0, Min=INT_MAX;
                for(auto it: map){
                    Min = min(Min, it.second);
                    Max = max(Max, it.second);
                }
                sum += (Max-Min);
            }
        }
        return sum;
    }
};