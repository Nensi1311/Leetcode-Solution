class Solution {
public:
    bool dfs(vector<vector<int>> &adj, int src, vector<int> &vis, int col){
        vis[src] = col;
        for(auto i : adj[src]){
            if(vis[i] == 0){
                if(!dfs(adj, i, vis, col*-1)){
                    return false;
                }
            }
            else if(vis[i] == col){
                return false;
            }
        }
        return true;
    }

    bool isBipartite(vector<vector<int>>& adj) {
        int n = adj.size();
        vector<int> vis(n, 0);
        for(int  i =0; i<n; i++){
            if(vis[i] == 0){
                if(!dfs(adj, i, vis, 1))
                    return false;
            }
        }
        return true;
    }
};