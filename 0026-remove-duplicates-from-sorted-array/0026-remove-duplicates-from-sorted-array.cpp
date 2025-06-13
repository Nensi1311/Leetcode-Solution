class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int, int> mp;

        for (int i : nums) {
            mp[i]++;
        }

        int count = 0;
        for (auto it : mp) {
            nums[count++] = it.first;
        }
        return mp.size();
    }
};
