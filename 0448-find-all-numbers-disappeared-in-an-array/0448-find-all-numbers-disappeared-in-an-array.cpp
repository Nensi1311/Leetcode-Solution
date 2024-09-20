class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        vector<int> result;
        unordered_map<int, int> um;
        for(int i=0; i<n; i++){
            um[nums[i]]++;
        }
        for(int j=1; j<=n; j++){
            if(um.find(j)==um.end()){
                result.push_back(j);
            }
        }
        return result;
    }
};