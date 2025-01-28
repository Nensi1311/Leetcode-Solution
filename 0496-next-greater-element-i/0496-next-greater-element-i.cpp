class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        vector<int> result;
        for(int i=0; i<n; i++){
            stack<int> st;
            bool flag=0;
            for(int j=m-1; j>=0; j--){
                if(nums1[i]==nums2[j]){
                    flag=1;
                    if(st.empty()){
                        result.push_back(-1);
                    }
                    else{
                        result.push_back(st.top());
                    }
                    break;
                }
                if(nums2[j] > nums1[i]){
                    st.push(nums2[j]);
                }
            }
            if(!flag){
                result.push_back(-1);
            }
        }
        return result;
    }
};