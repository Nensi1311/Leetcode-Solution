class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long result = 0;
        int n = nums.size();
        int i = 0;
        while(i<n){
            long long count = 0;
            while(i<n && nums[i] == 0){
                count++;
                i++;
            }
            result += (count * (count + 1)) / 2;
            i++;
        }
        return result;
    }
};