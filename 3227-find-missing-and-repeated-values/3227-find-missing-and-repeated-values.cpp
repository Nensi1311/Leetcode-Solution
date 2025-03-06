class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n=grid.size();
        vector<int> result;
        map<int, int> mp;

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                mp[grid[i][j]]++;
            }
        }

        n*=n;
        int sum = (n * (n+1)) / 2;
        cout<<sum<<" ";

        for(auto i : mp){
            sum -= i.first;
        cout<<sum<<" ";
            
            if(i.second == 2){
                result.push_back(i.first);
            }
        }
        result.push_back(sum);
        return result;
    }
};