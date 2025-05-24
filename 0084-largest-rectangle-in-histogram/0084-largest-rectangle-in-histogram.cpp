class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        heights.push_back(0); 
        int maxArea = 0;
        stack<pair<int, int>> st; 

        for (int i = 0; i < heights.size(); ++i) {
            int start = i;
            while (!st.empty() && st.top().first > heights[i]) {
                int height = st.top().first;
                int index = st.top().second;
                st.pop();
                maxArea = max(maxArea, height * (i - index));
                start = index;  
            }
            st.push({heights[i], start});
        }

        return maxArea;
    }
};