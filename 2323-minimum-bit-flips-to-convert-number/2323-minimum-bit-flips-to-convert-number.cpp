class Solution {
public:
    int minBitFlips(int start, int goal) {
        int ans = 0;
        int Xor = start ^ goal;

        while(Xor!=0){
            ans += Xor & 1;
            Xor >>= 1;
        }
        return ans;
    }
};