class Solution {
public:
    int countBeautifulPairs(vector<int>& nums) {
        int count=0;
        int n=nums.size();
        for(int i=0; i<n; i++){
            int first = nums[i];
            while(first>=10){
                first/=10;
            }
            for(int j=i+1; j<n; j++){
                int last = nums[j] % 10;
                if(gcd(first,last)==1){
                    count++;
                    //cout << nums[i] << nums[j] << endl;
                }
            }
        }
        return count;
    }
};