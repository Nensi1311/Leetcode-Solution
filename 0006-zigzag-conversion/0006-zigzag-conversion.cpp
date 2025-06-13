class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1){
            return s;
        }

        int n = s.length();
        int col = ceil(n / (2 * numRows - 2.0)) * (numRows - 1);

        vector<vector<char>> v(numRows, vector<char> (col, ' '));

        int curRow = 0;
        int curCol = 0;
        int ind = 0;

        while(ind < n){
            while(ind < n && curRow < numRows){
                v[curRow][curCol] = s[ind];
                curRow++;
                ind++;
            }

            curRow -= 2;
            curCol++;

            while(ind < n && curRow > 0 && curCol < col){
                v[curRow][curCol] = s[ind];
                curRow--;
                curCol++;
                ind++;
            }
        }

        string result = "";
        for(int i=0; i<numRows; i++){
            for(int j=0; j<col; j++){
                if(v[i][j] != ' '){
                    result += v[i][j];
                }
            }
        }
        return result;
    }
};