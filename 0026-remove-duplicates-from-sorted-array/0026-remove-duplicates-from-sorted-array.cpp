class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=0;
        int n=nums.size();
        for(int i=1; i<n; i++){
            if(nums[i]!=nums[k]){
                nums[k+1]=nums[i];
                k++;
            }
        }
        return k+1;
    }
};