class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        if(nums.size()==1){
            return 0;
        }
        if(nums[0] > nums[1]){
            return 0;
        }
        int n=nums.size();
        if(nums[n-2]<nums[n-1]){
            return n-1;
        }
        int low = 1, high = n-2;
        while(low <= high){
            int mid = (high+low)/2;
            if(nums[mid-1]<nums[mid] && nums[mid]>nums[mid+1]){
                return mid;
            }
            else if(nums[mid-1]>nums[mid]){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return -1;
    }
};