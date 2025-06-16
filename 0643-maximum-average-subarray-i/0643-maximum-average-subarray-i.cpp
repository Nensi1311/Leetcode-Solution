class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum = 0;
        int left = 0;
        int right = k-1;
        int n = nums.size();

        for(int i=0; i<k; i++){
            sum += nums[i];
        }

        double max_sum = sum;

        while(right < n-1){
            sum -= nums[left];
            left++;
            right++;
            sum += nums[right];
            max_sum = max(max_sum, sum);
        }

        return max_sum / k;
    }
};