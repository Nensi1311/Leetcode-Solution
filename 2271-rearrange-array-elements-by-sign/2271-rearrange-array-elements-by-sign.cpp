class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> positive;
        vector<int> negative;
        vector<int> result;

        for(int i=0; i<nums.size(); i++){
            if(nums[i]>0){
                positive.push_back(nums[i]);
            }
            else{
                negative.push_back(nums[i]);
            }
        }

        int index1=0;
        int index2=0;
        while(index2<nums.size()/2){
            result.push_back(positive[index1]);
            index1++;
            result.push_back(negative[index2]);
            index2++;
        }
        return result;
    }
};