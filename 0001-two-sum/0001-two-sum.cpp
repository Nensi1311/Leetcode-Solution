class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        unordered_map<int, int> sum;

        for(int i=0; i<n; i++){
            sum[nums[i]]=i;
        }

        for(int i=0; i<n; i++){
            int diff = target-nums[i];
            if(sum.count(diff) && sum[diff]!=i){
                return {i, sum[diff]};
            }
        }
        return {};
    }
};