class Solution {
public:
    bool CanPut(vector<string> &board, int r, int c, int n){
    for(int i=0;i<r;i++){
        if(board[i][c]=='Q') return false;

    }

    int i=r-1,j=c-1;
    while(i>=0 && j>=0){
        if(board[i--][j--]=='Q') return false;
    }

     i=r-1,j=c+1;
    while(i>=0 && j<n){
        if(board[i--][j++]=='Q') return false;
    }
    return true;
  }

    bool f(vector<vector<string>> &ans, vector<string> &board, int r, int n){
        if(r == n){
            ans.push_back(board);
            return false;
        }
        for(int i=0; i<n; i++){
            if(CanPut(board, r, i, n)){
                board[r][i] = 'Q';
                if(f(ans, board, r+1, n)){
                    return true;
                }
                board[r][i] = '.';
            }
        }
        return false;
    }

    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n, string(n, '.'));
        f(ans, board, 0, n);
        return ans;
    }
};