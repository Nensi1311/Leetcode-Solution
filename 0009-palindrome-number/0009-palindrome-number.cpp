class Solution {
public:
    bool isPalindrome(int x) {
        int ans = 0;
        int n = x;
        if(x < 0){
            return false;
        }
        while(x != 0){
            if(ans > INT_MAX/10 || ans < INT_MIN/10){
                return 0;
            }
            ans = ans*10 + x%10;
            x /= 10;
        }
        
        if(ans == n){
            return true;
        }
        return false;
    }
};