class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {
        int n = nums.size();
        vector<int> v(n);
        v[n-1] = n;
        int ans  = 0;
        int gi = n-1;
        for(int i = n-2; i>=0;i--){
            if(nums[i]>nums[gi]){
                v[i] = gi;
                gi = i;
            }else{
                int cmi = gi;
                while(cmi < n && nums[cmi]>=nums[i]){
                    ans = max(ans, cmi - i);
                    cmi = v[cmi];
                }
            }
        }
        return ans;


    }
};