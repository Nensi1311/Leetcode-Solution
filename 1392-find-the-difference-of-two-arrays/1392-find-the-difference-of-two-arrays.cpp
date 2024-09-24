class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size();

        unordered_set<int> set1(nums1.begin(), nums1.end());
        unordered_set<int> set2(nums2.begin(), nums2.end());
        vector<int> v1, v2;

        for(int i:set1){
            if(set2.count(i)==0){
                v1.push_back(i);
            }
        }
        for(int j:set2){
            if(set1.count(j)==0){
                v2.push_back(j);
            }
        }
        return {v1, v2};
    }
};