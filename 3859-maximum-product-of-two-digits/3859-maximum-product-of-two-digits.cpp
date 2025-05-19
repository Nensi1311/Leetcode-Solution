class Solution {
public:
    int maxProduct(int n) {
        vector<int> result;
        while(n>0){
            int rem = n%10;
            result.push_back(rem);
            n = n/10;
        }
        sort(result.begin(), result.end());
        return result[result.size()-1] * result[result.size()-2];
    }
};