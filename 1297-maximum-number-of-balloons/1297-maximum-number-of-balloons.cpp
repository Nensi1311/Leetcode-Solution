class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char, int> mp;
        for(auto i : text){
            mp[i]++;
        }

        int count_b = mp['b'];
        int count_a = mp['a'];
        int count_n = mp['n'];
        int count_l = mp['l'] / 2;
        int count_o = mp['o'] / 2;

        return min({count_b, count_a, count_n, count_l, count_o});
    }
};