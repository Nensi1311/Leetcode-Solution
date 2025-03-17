class Solution {
public:
    bool buddyStrings(string s, string goal) {
        int n = s.size();
        int m = goal.size();
        vector<int> v;
        int count = 0;
        map<char, int> mp;
        if(n != m){
            return false;
        }

        for(int i=0; i<n; i++){
            if(s[i] != goal[i]){
                v.push_back(i);
                count++;
            }

            if(s[i] == goal[i]){
                mp[s[i]]++;
            }

            if(count > 2){
                return false;
            }
        }

        if(count == 0){
            for(auto i : mp){
                if(i.second >= 2){
                    return true;
                }
            }
        }

        if(count == 2){
            swap(s[v[0]], s[v[1]]);
            if(s == goal){
                return true;
            }
        }

        return false;
    }
};