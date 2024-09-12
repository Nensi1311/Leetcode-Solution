class Solution {
public:
    int maxVowels(string s, int k) {
        int count=0;
        int n=s.size();

        for(int i=0; i<k; i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
                count++;
            }
        }
        int max_count=count;

        for(int i=k; i<n; i++){
            if (s[i - k] == 'a' || s[i - k] == 'e' || s[i - k] == 'i' || s[i - k] == 'o' || s[i - k] == 'u') {
                count--;
            }
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
                count++;
            }
            max_count = max(count, max_count);
        }
        return max_count;
    }
};