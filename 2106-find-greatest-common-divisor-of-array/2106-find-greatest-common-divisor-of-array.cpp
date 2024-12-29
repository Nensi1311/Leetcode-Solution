class Solution {
public:
    int findGCD(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(), nums.end());
        int small = nums[0];
        int large = nums[n-1];
        int ans;
        for(int i=small; i>=1; i--){
            if(small%i==0 && large%i==0){
                ans = i;
                break;
            }
        }
        return ans;
    }
};