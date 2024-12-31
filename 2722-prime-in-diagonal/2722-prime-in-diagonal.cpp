class Solution {
public:
    bool isPrime(int n) {
            if(n==1){
                return false;
            }
            for(int i=2; i<=sqrt(n); i++){
                if(n%i==0){
                    return false;
                }
            }
            return true;
    }

    int diagonalPrime(vector<vector<int>>& nums) {
    
        int n=nums.size();
        int Max=0;
        int ans;

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(i==j){
                    ans=nums[i][j];
                    if(isPrime(ans)){
                        Max=max(Max, ans);
                    }
                }
                else if((i+j)==(n-1)){
                    ans=nums[i][j];
                    if(isPrime(ans)){
                        Max=max(Max, ans);
                    }
                }
            }
        }
        return Max;
    }
};