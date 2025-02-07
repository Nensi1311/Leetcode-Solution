class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        long count=0;
        if((n==1 && n>k) || (n==1 && n<k)){
            return 0;
        }
        else if(n==1 && n==k){
            return 1;
        }
        for(int i=0; i<n; i++){
            int sum = nums[i];
            if(sum==k){
                count++;
            }
            for(int j=i+1; j<n; j++){
                sum += nums[j];
                if(sum==k){
                    count++;
                }
            }
        }
        return count;
    }
};