class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n=nums.size();
        int max_count=0;
        int min_count=0;
        int result=0;
        for(int i=1; i<n; i++){
            if(nums[i-1]<nums[i]){
                max_count++;
                result = max(result, min_count);
                min_count=0;
            }
            if(nums[i-1]>nums[i]){
                min_count++;
                result = max(result, max_count);
                max_count=0;
            }
            if(nums[i-1]==nums[i]){
                result = max(result, max(min_count, max_count));
                min_count=0;
                max_count=0;
            }
        }
        result = max(result, max(min_count, max_count));
        result++;
        return result;
    }
};