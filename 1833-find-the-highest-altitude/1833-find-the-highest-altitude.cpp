class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();
        vector<int> a;
        a.push_back(0);
        for(int i=0; i<n; i++){
            a.push_back(gain[i]+a[i]);
        }
        sort(a.begin(), a.end());
        return a[n];
    }
};