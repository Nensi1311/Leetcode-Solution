class Solution {
public:
    vector<int> findNSE(vector<int>& arr){
        int n=arr.size();
        stack<int> st;
        vector<int> NSE(n);
        for(int i=n-1; i>=0; i--){
            while(!st.empty() && arr[st.top()] >= arr[i]){
                st.pop();
            }
            NSE[i] = st.empty() ? n : st.top();
            st.push(i);
        }
        return NSE;
    }

    vector<int> findPSEE(vector<int>& arr){
        int n = arr.size();
        stack<int> st;
        vector<int> PSEE(n);
        for(int i=0; i<n; i++){
            while(!st.empty() && arr[st.top()] > arr[i]){
                st.pop();
            }
            PSEE[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }
        return PSEE;
    }
    int sumSubarrayMins(vector<int>& arr) {
       int n = arr.size();
       vector<int> NSE = findNSE(arr);
       vector<int> PSEE = findPSEE(arr);
       long long sum=0, MOD=1e9 + 7;

       for(int i=0; i<n; i++){
        long long left = i-PSEE[i];
        long long right = NSE[i] - i;
        sum = (sum + (arr[i] * left * right) % MOD) % MOD;
       }
       return sum;
    }
};