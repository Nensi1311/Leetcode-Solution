class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int current=0, previous=0, ans=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==1){
                current++;
            }
            else{
                ans = max(ans, previous+current);
                previous = current;
                current = 0;
            }
        }
        ans = max(ans, current+previous);
        return ans == nums.size() ? ans-1 : ans; 
    }
};