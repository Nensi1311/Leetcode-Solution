class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> result;
        long first=1;
        for(int i=0; i<=rowIndex; i++){
            result.push_back(first);
            first=first*(rowIndex-i)/(i+1);
        }
        return result;
    }
};