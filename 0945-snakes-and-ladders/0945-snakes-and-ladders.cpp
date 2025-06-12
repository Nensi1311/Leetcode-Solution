class Solution {
public:
    int snakesAndLadders(vector<vector<int>>& board) {
        int n = board.size();    
        int Max = n * n;
        queue<int> q;
        q.push(1);
        vector<bool> visited(Max + 1, false);
        visited[1] = true;

        int step = 0;
        while(!q.empty()){
            int size = q.size();
            for(int i = 0; i < size; i++){
                int current = q.front();
                q.pop();
                
                if(current == Max){
                    return step;
                }

                for(int j = current + 1; j <= min(current + 6, Max); j++){
                    int destination = j;
                    int row = (j -1) / n;
                    int col = (j - 1) % n;
                    if(row % 2 == 1){
                        col = n - 1 - col;
                    }
                    row = n - 1 - row;
                    if(board[row][col] != -1){
                        destination = board[row][col];
                    }
                    if(!visited[destination]){
                        visited[destination] = true;
                        q.push(destination);
                    }
                }
            }
            step++;
        }
        return -1;
    }
};