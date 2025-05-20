class Solution {
public:
    bool canPut(vector<vector<char>>& board, int r, int c, char val) {
        for(int i = 0; i < 9; i++) {
            if(board[r][i] == val || board[i][c] == val)
                return false;
        }

        int startRow = (r / 3) * 3;
        int startCol = (c / 3) * 3;

        for(int i = 0; i < 3; i++) {
            for(int j = 0; j < 3; j++) {
                if(board[startRow + i][startCol + j] == val)
                    return false;
            }
        }
        return true;
    }

    bool f(vector<vector<char>>& board) {
        for(int i = 0; i < 9; i++) {
            for(int j = 0; j < 9; j++) {
                if(board[i][j] == '.') {
                    for(char c = '1'; c <= '9'; c++) {
                        if(canPut(board, i, j, c)) {
                            board[i][j] = c;
                            if(f(board)) return true;
                            board[i][j] = '.';
                        }
                    }
                    return false; 
                }
            }
        }
        return true; 
    }

    void solveSudoku(vector<vector<char>>& board) {
        f(board);
    }
};
