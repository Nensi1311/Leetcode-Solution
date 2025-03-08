class Solution {
public:
    vector<int> arrayChange(vector<int>& nums, vector<vector<int>>& operations) {
        int n = operations.size();
        int m = nums.size();
        map<int, int> mp;

        for(int i=0; i<m; i++){
            mp[nums[i]] = i;
        }

        for(int i=0; i<n; i++){
            int index = mp[operations[i][0]];
            nums[index] = operations[i][1];
            mp[operations[i][1]] = index;
        }

        return nums;
    }
};