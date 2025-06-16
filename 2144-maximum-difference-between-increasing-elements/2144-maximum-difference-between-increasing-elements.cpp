class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int ans = -1;
        int dif = 0;
        for(int i=0; i<nums.size(); i++){
            for(int j=i; j<nums.size(); j++){
                if(nums[i] < nums[j]){
                    dif = nums[j] - nums[i];
                    ans = max(ans, dif);
                }
            }
        }
        return ans;
    }
};