class Solution {
public:
    bool isPalindrome(string s) {
        string result = "";
        for(int i=0; i<s.size(); i++){
            if(isalnum(s[i])){
                result+=tolower(s[i]);
                }
            }
            int left=0;
            int right = result.size()-1;
            while(left<right){
                if(result[left]!=result[right]){
                    return false;
                }
                left++;
                right--;
            }
        return true;
    }  
};