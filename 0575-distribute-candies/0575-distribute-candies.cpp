class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n = candyType.size();
        map<int, int> mp;
        for(int i : candyType){
            mp[i]++;
        }

        int count = 0;
        for(auto i : mp){
            count += mp.count(i.first);
        }

        if(count > n/2){
            return n/2;
        }
        return count;
    }
};