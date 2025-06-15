class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int sum = 0;
        int result = 0;
        unordered_map<int, int> mp;
        mp[0] = -1;

        for(int i=0; i<nums.size(); i++){
            sum += (nums[i] == 1) ? 1 : -1;
            if(mp.find(sum) != mp.end()){
                result = max(result, i - mp[sum]);
            }
            else{
                mp[sum] = i;
            }
        }
        return result;
    }
};