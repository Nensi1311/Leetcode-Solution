class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int maxi = INT_MIN, current = 0;
        for(int i=0; i<nums.size(); i++){
            current += nums[i];
            maxi = max(current, maxi);
            if(current<0){
                current=0;
            }
        }

        int mini = INT_MAX, current2 = 0, total=0;
        for(int i=0; i<nums.size(); i++){
            total += nums[i];
            current2 += nums[i];
            mini = min(mini, current2);
            if(current2>0){
                current2=0;
            }
        }

        if(total == mini){
            return maxi;
        }
        return max(maxi, total-mini);
    }
};